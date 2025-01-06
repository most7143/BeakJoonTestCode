//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//static vector<int> Parents;
//
//typedef struct Edge
//{
//	int s, e, v;  // 시작점 s, 끝점 e, 가중치 v
//	// 우선순위 큐에서 간선의 가중치가 작은 순으로 정렬되도록 > 연산자 오버로딩
//	bool operator>(const Edge& temp) const
//	{
//		return v > temp.v;  // 가중치가 큰 경우 우선순위가 낮게
//	}
//}Edge;
//
//// 부모를 찾는 함수 (경로 압축)
//int Find(int a)
//{
//	// a가 자기 자신이 부모라면, a를 반환
//	if (a == Parents[a])
//	{
//		return a;
//	}
//	else
//	{
//		// 경로 압축: 부모를 바로 찾은 부모로 업데이트하여 트리 깊이를 줄임
//		return Parents[a] = Find(Parents[a]);
//	}
//}
//
//// Union 함수: 두 집합을 합치는 함수
//void Union(int a, int b)
//{
//	a = Find(a);  // a의 부모를 찾음
//	b = Find(b);  // b의 부모를 찾음
//
//	// a와 b가 서로 다른 집합에 속하면 합침
//	if (a != b)
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
//	int N, M;
//	cin >> N >> M;
//
//	// 우선순위 큐 (가중치가 작은 순으로 간선을 처리)
//	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//	// 부모 배열을 크기 N+1로 초기화
//	Parents.resize(N + 1);
//
//	// 각 노드의 부모를 자기 자신으로 초기화
//	for (int i = 0; i <= N; i++)
//	{
//		Parents[i] = i;
//	}
//
//	// M개의 간선 정보를 입력받아 우선순위 큐에 삽입
//	for (int i = 0; i < M; i++)
//	{
//		int s, e, v;
//		cin >> s >> e >> v;  // 간선의 시작점, 끝점, 가중치 입력
//		pq.push(Edge{ s, e, v });  // 간선 정보를 큐에 삽입
//	}
//
//	int useEdge = 0;  // 사용한 간선의 수
//	int result = 0;   // 최소 신장 트리의 가중치 합
//
//	// 최소 신장 트리에서 사용한 간선이 N-1개가 될 때까지 반복
//	while (useEdge < N - 1)
//	{
//		// 우선순위 큐에서 가장 작은 가중치를 가진 간선 꺼내기
//		Edge now = pq.top();
//		pq.pop();
//
//		// 시작점과 끝점이 서로 다른 집합에 속하면 합침 (사이클을 만들지 않음)
//		if (Find(now.s) != Find(now.e))
//		{
//			Union(now.s, now.e);  // 두 집합을 합침
//			result += now.v;      // 가중치를 결과에 더함
//			useEdge++;            // 사용한 간선의 수 증가
//		}
//	}
//
//	cout << result;
//}