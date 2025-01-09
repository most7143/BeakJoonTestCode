//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//// 부모 노드를 저장하는 벡터
//static vector<int> Parents;
//
//// 간선(Edge)을 나타내는 구조체
//// 간선 구조체는 시작점, 끝점, 가중치를 가지며, 우선순위 큐에서 가중치를 기준으로 정렬될 수 있도록 operator >를 정의합니다.
//typedef struct Edge {
//	int s, e, v;  // 시작점, 끝점, 가중치
//	bool operator > (const Edge& temp) const
//	{
//		return v > temp.v;  // 가중치 기준으로 우선순위 큐에서 정렬
//	}
//} Edge;
//
//// 부모 노드를 찾는 함수 (경로 압축)
//int Find(int a)
//{
//	if (Parents[a] == a)  // 부모가 자기 자신이면 그 자체가 루트 노드
//	{
//		return a;
//	}
//
//	// 부모를 재귀적으로 찾아가면서 경로 압축
//	return Parents[a] = Find(Parents[a]);
//}
//
//// 두 집합을 합치는 함수 (합집합)
//void Union(int a, int b)
//{
//	a = Find(a);  // a의 루트 노드 찾기
//	b = Find(b);  // b의 루트 노드 찾기
//
//	if (a != b)  // a와 b가 서로 다르면 합침
//	{
//		Parents[b] = a;  // b의 부모를 a로 설정
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, sum = 0;
//	cin >> N;  // N은 노드의 개수 (즉, 간선의 수는 N-1개)
//
//	// 우선순위 큐 선언 (간선의 가중치를 기준으로 오름차순으로 정렬)
//	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//	// 간선 정보를 입력받고 우선순위 큐에 넣기
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			// 문자 하나를 읽어오는 코드
//			char tempc = cin.get();
//
//			// 새로운 줄을 만났을 때, 불필요한 줄바꿈 문자를 처리
//			if (tempc == '\n')
//			{
//				tempc = cin.get();
//			}
//
//			int temp = 0;
//
//			// 문자에 따라 가중치를 계산
//			if (tempc >= 'a' && tempc <= 'z')
//			{
//				temp = tempc - 'a' + 1;  // 'a'는 1, 'b'는 2, ..., 'z'는 26
//			}
//			else if (tempc >= 'A' && tempc <= 'Z')
//			{
//				temp = tempc - 'A' + 27;  // 'A'는 27, 'B'는 28, ..., 'Z'는 52
//			}
//			sum += temp;  // 가중치를 합산
//
//			// i와 j가 같지 않고, 가중치가 0이 아닌 경우에만 간선 추가
//			if (i != j && temp != 0)
//			{
//				pq.push(Edge{ i,j,temp });  // 우선순위 큐에 간선 삽입
//			}
//		}
//	}
//
//	// 부모를 자기 자신으로 초기화 (초기에는 모두 독립적인 집합)
//	Parents.resize(N);
//	for (int i = 0; i < N; i++)
//	{
//		Parents[i] = i;
//	}
//
//	int useEdge = 0;  // 사용된 간선의 개수
//	int result = 0;   // 최소 스패닝 트리의 가중치 합
//
//	// 우선순위 큐에서 간선을 하나씩 꺼내면서 최소 스패닝 트리를 구성
//	while (!pq.empty())
//	{
//		Edge now = pq.top();  // 큐에서 가장 가중치가 작은 간선 꺼내기
//		pq.pop();
//
//		// 시작점과 끝점이 서로 다른 집합에 있을 경우 (사이클을 만들지 않음)
//		if (Find(now.s) != Find(now.e))
//		{
//			Union(now.s, now.e);  // 두 집합을 합침
//			result += now.v;      // 가중치를 결과에 더함
//			useEdge++;            // 사용된 간선의 개수 증가
//		}
//	}
//
//	// 최소 스패닝 트리가 가능한지 확인
//	// 사용된 간선의 수가 N-1개라면 MST가 형성되었으므로 결과 출력
//	if (useEdge == N - 1)
//	{
//		cout << sum - result;  // 전체 가중치에서 MST 가중치를 빼서 출력
//	}
//	else
//	{
//		cout << "-1";  // MST가 불가능하면 -1 출력
//	}
//}