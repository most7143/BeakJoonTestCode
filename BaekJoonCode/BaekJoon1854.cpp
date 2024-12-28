//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//// Node 타입은 (정수, 정수)로, 첫 번째 값은 비용, 두 번째 값은 노드 번호를 의미
//typedef pair<int, int> Node;
//
//// 최대 N개의 노드와 M개의 간선, K번째 최단 경로를 찾을 것
//static int N, M, K;
//static int W[1001][1001];  // 인접 행렬 W, W[a][b]는 a에서 b로 가는 간선의 가중치
//static priority_queue<int> DistQueue[1001];  // 각 노드에 대해 K번째까지의 최단 경로를 관리
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M >> K;  // 노드의 개수 N, 간선의 개수 M, 찾고자 하는 K번째 최단 경로의 수
//
//	// 간선 정보 입력
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;  // a에서 b로 가는 가중치가 c인 간선 입력
//		W[a][b] = c;  // 간선 정보 저장 (방향 그래프)
//	}
//
//	// 최소 힙을 사용하여 다익스트라 알고리즘 구현
//	priority_queue<Node, vector<Node>, greater<Node>> pq;  // (비용, 노드 번호) 순으로 최소 힙을 만들기 위해 greater<Node> 사용
//
//	pq.push(make_pair(0, 1));  // 시작 노드 1로 초기화, 비용 0
//	DistQueue[1].push(0);  // 1번 노드의 비용 0을 DistQueue에 추가
//
//	// 다익스트라 알고리즘 시작
//	while (pq.empty() == false)
//	{
//		Node now = pq.top();  // 가장 비용이 적은 노드 하나를 꺼냄
//		pq.pop();
//
//		// 현재 노드에서 갈 수 있는 모든 인접 노드 탐색
//		for (int adjNode = 1; adjNode <= N; adjNode++)
//		{
//			if (W[now.second][adjNode] != 0)  // 간선이 존재하는 경우
//			{
//				int totalCost = now.first + W[now.second][adjNode];
//
//				// K번째까지의 최단 경로를 저장할 수 있는 공간이 남아 있다면
//				if (DistQueue[adjNode].size() < K)
//				{
//					DistQueue[adjNode].push(totalCost);  // 새로운 경로 비용을 DistQueue에 추가
//					pq.push(make_pair(totalCost, adjNode));  // 해당 경로를 큐에 추가
//				}
//				// K번째 최단 경로를 이미 구했으면, 더 작은 비용이 나오는 경로는 교체
//				else if (DistQueue[adjNode].top() > totalCost)
//				{
//					DistQueue[adjNode].pop();  // 가장 큰 값을 제거 (우리는 K번째까지의 경로를 구하므로, K개를 초과하지 않게 관리)
//					DistQueue[adjNode].push(totalCost);  // 새로운 경로를 추가
//					pq.push(make_pair(totalCost, adjNode));  // 경로를 큐에 추가
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		// 해당 노드에 K개의 경로가 있으면 가장 큰 경로를 출력
//		if (DistQueue[i].size() == K)
//		{
//			cout << DistQueue[i].top() << "\n";  // K번째로 짧은 경로 출력
//		}
//		else
//		{
//			cout << "-1" << "\n";  // K번째 최단 경로가 없다면 -1 출력
//		}
//	}
//}