//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	// N: 노드의 개수, M: 간선의 개수
//	int N, M;
//
//	cin >> N >> M;
//
//	// 그래프와 관련된 자료구조 초기화
//	vector<vector<pair<int, int>>> A;           // A는 각 노드에서 연결된 노드들(간선)의 정보를 저장
//	vector<vector<pair<int, int>>> reverseA;    // reverseA는 역방향 그래프(각 노드로 들어오는 간선)의 정보를 저장
//	vector<int> indegree;                       // 각 노드로 들어오는 간선의 개수 (진입차수)
//	vector<int> result;                         // 각 노드까지 도달하는 최대 거리(가중치 합)
//
//	A.resize(N + 1);
//	reverseA.resize(N + 1);
//	indegree.resize(N + 1);
//	result.resize(N + 1);
//
//	// M개의 간선 입력 처리
//	for (int i = 1; i <= M; i++)
//	{
//		int S, E, V;
//
//		cin >> S >> E >> V;
//
//		// 간선 (S -> E)와 가중치 V 입력
//		A[S].push_back(make_pair(E, V));
//
//		// 역방향 그래프에 (E -> S)와 가중치 V 입력
//		reverseA[E].push_back(make_pair(S, V));
//
//		// E로 들어오는 간선이 하나 더 추가되므로 indegree[E] 증가
//		indegree[E]++;
//	}
//
//	// 시작 노드와 끝 노드 입력
//	int start, end;
//
//	cin >> start >> end;
//
//	// 위상 정렬을 위한 큐 (위상 정렬을 통한 경로 탐색)
//	queue<int> myQueue;
//
//	// 시작 노드를 큐에 넣음
//	myQueue.push(start);
//
//	// 큐가 빌 때까지 반복
//	while (false == myQueue.empty())
//	{
//		// 큐에서 현재 노드 추출
//		int now = myQueue.front();
//		myQueue.pop();
//
//		// 현재 노드와 연결된 노드들을 탐색
//		for (pair<int, int> next : A[now])
//		{
//			// next.first는 도달할 노드, next.second는 그 간선의 가중치
//			indegree[next.first]--; // next 노드로의 진입 차수를 감소시킴
//
//			// 해당 노드에 도달하는 최대 거리를 갱신
//			result[next.first] = max(result[next.first], result[now] + next.second);
//
//			// 만약 진입차수가 0이라면, 해당 노드는 더 이상 선행 노드가 없으므로 큐에 넣음
//			if (indegree[next.first] == 0)
//			{
//				myQueue.push(next.first);
//			}
//		}
//	}
//
//	// 끝 노드에 도달하는 경로 개수를 세기 위한 변수
//	int resultCount = 0;
//
//	// 방문 여부 체크용 벡터
//	vector<bool> visited;
//	visited.resize(N + 1);
//
//	// 끝 노드부터 거꾸로 경로 탐색을 위한 큐
//	queue<int> requeue;
//
//	// 끝 노드를 큐에 넣음
//	requeue.push(end);
//
//	// 끝 노드는 이미 방문했으므로 방문 표시
//	visited[end] = true;
//
//	// 끝 노드부터 역방향 그래프를 따라 탐색
//	while (false == requeue.empty())
//	{
//		// 큐에서 현재 노드 추출
//		int now = requeue.front();
//		requeue.pop();
//
//		// 현재 노드로 올 수 있는 모든 노드들을 탐색 (reverseA)
//		for (pair<int, int> next : reverseA[now])
//		{
//			// 역방향 경로에서 최대 거리를 만족하는 노드만을 추적
//			if (result[next.first] + next.second == result[now])
//			{
//				resultCount++; // 경로 개수 증가
//
//				// 아직 방문하지 않은 노드는 큐에 넣고 방문 표시
//				if (visited[next.first] == false)
//				{
//					visited[next.first] = true;
//					requeue.push(next.first);
//				}
//			}
//		}
//	}
//
//	cout << result[end] << "\n"; // 끝 노드까지의 최대 거리 출력
//	cout << resultCount;         // 끝 노드까지의 최대 거리를 만족하는 경로의 개수 출력
//}