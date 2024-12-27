//#include<iostream>
//#include<vector>
//#include<queue>
//#include<limits.h>
//
//using namespace std;
//
////백준 1916
//
//// edge 타입을 정의 (int, int) -> (목적지, 가중치)
//typedef pair<int, int> edge;
//
//static int N, M;  // N: 노드의 수, M: 엣지(간선)의 수
//static vector<int> Dist;  // 각 노드까지의 최소 거리
//static vector<bool> Visited;  // 각 노드의 방문 여부
//static vector<vector<edge>> Mlist;  // 그래프의 인접 리스트 (목적지, 가중치)
//
//// 다익스트라 알고리즘을 구현한 함수
//int Dijkstra(int start, int end)
//{
//	// 항상 작은 거리를 우선적으로 처리하기 위해서 우선순위 큐 선언 (pair<int, int> -> 거리, 노드)
//	priority_queue<edge, vector<edge>, greater<edge>> q;
//
//	// 시작 노드를 큐에 넣고, 시작 노드의 거리값을 0으로 설정
//	q.push(make_pair(0, start));
//	Dist[start] = 0;
//
//	while (!q.empty())
//	{
//		// 큐에서 가장 작은 거리의 노드를 꺼냄
//		edge nowNow = q.top();
//		q.pop();
//
//		int now = nowNow.second;  // 현재 노드
//
//		if (!Visited[now])
//		{
//			Visited[now] = true;
//
//			// 현재 노드와 연결된 모든 인접 노드를 확인
//			for (edge n : Mlist[now])
//			{
//				// n.first는 목적지, n.second는 그 목적지까지의 가중치
//				// 만약 목적지까지의 거리 값이 더 작은 값이라면 갱신
//				if (Dist[n.first] > Dist[now] + n.second)
//				{
//					Dist[n.first] = Dist[now] + n.second;
//					q.push(make_pair(Dist[n.first], n.first));  // 갱신된 거리값을 큐에 삽입
//				}
//			}
//		}
//	}
//
//	// 다익스트라 종료 후, 목적지까지의 최소 거리를 반환
//	return Dist[end];
//}
//
//int main()
//{
//	cin >> N >> M;
//
//	// 노드가 1번부터 시작하기 때문에 각 배열들은  N+1로 설정
//
//	// 거리를 INT_MAX로 초기화
//	Dist.resize(N + 1);
//	fill(Dist.begin(), Dist.end(), INT_MAX);
//
//	// 미방문(false) 상태로 초기화
//	Visited.resize(N + 1);
//	fill(Visited.begin(), Visited.end(), false);
//
//	// Mlist는 인접 리스트로, 각 노드의 연결 정보를 저장
//	Mlist.resize(N + 1);
//
//	// 간선 정보 입력
//	for (int i = 0; i < M; i++)
//	{
//		int start, end, weight;
//		cin >> start >> end >> weight;
//		Mlist[start].push_back(make_pair(end, weight));  // start에서 end로 가는 가중치 weight의 엣지
//	}
//
//	// 출발 노드와 도착 노드 입력
//	int startIndex, endIndex;
//	cin >> startIndex >> endIndex;
//
//	// 다익스트라 알고리즘 실행 후, 출발 노드에서 도착 노드까지의 최소 거리 출력
//	int result = Dijkstra(startIndex, endIndex);
//	cout << result;  // 결과 출력
//}u8u8i988888888888888888888888899i8im