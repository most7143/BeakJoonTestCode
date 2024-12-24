//#include <iostream>
//#include <vector>
//#include <queue>
//#include <limits.h>
//
//using namespace std;
//
//// 백준 1753 문제
//
//// edge는 (가중치, 노드) 형식의 쌍을 의미
//typedef pair<int, int> edge;
//
//// 전역 변수 선언
//static int V, E, K;  // V: 노드의 수, E: 간선의 수, K: 출발 노드
//static vector<int> Mdistance;  // Mdistance[i]: i번 노드까지의 최소 거리
//static vector<bool> Visited;   // Visited[i]: i번 노드를 방문했는지 여부
//static vector<vector<edge>> Mlist;  // Mlist[i]: i번 노드와 연결된 간선들의 리스트
//
//static priority_queue<edge, vector<edge>, greater<edge>> Q;  // 우선순위 큐, (가중치, 노드) 기준으로 최소값을 우선 처리
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> V >> E >> K;
//
//	// Mdistance 벡터 초기화 (모든 노드에 대해 무한대로 설정)
//	Mdistance.resize(V + 1);
//	fill(Mdistance.begin(), Mdistance.end(), INT_MAX);
//
//	// Visited 벡터 초기화 (모든 노드 미방문 상태로 설정)
//	Visited.resize(V + 1);
//	fill(Visited.begin(), Visited.end(), false);
//
//	// Mlist 초기화 (각 노드의 연결 리스트)
//	Mlist.resize(V + 1);
//
//	for (int i = 0; i < E; i++)
//	{
//		int u, v, w;
//		cin >> u >> v >> w;  // 간선 u -> v, 가중치 w 입력
//
//		Mlist[u].push_back(make_pair(v, w));  // u -> v 간선 추가
//	}
//
//	// 출발 노드 K부터 시작 (초기 가중치는 0)
//	Q.push(make_pair(0, K));
//	Mdistance[K] = 0;  // 출발 노드의 최소 거리는 0
//
//	// 다익스트라 알고리즘
//	while (!Q.empty())
//	{
//		edge now = Q.top();  // 가장 작은 가중치의 노드를 가져옴
//		Q.pop();
//
//		int nowV = now.second;  // 현재 노드
//
//		if (Visited[nowV])
//		{
//			continue;
//		}
//
//		Visited[nowV] = true;
//
//		// 현재 노드와 연결된 모든 노드에 대해 최소 거리 갱신
//		for (int i = 0; i < Mlist[nowV].size(); i++)
//		{
//			edge temp = Mlist[nowV][i];
//			int next = temp.first;  // 연결된 다음 노드
//			int value = temp.second;  // 가중치
//
//			// 다음 노드까지의 거리가 더 짧으면 갱신
//			if (Mdistance[next] > Mdistance[nowV] + value)
//			{
//				Mdistance[next] = Mdistance[nowV] + value;
//				Q.push(make_pair(Mdistance[next], next));  // 갱신된 거리로 우선순위 큐에 삽입
//			}
//		}
//	}
//
//	for (int i = 1; i <= V; i++)
//	{
//		if (Visited[i])
//		{
//			cout << Mdistance[i] << "\n";
//		}
//		else
//		{
//			cout << "INF" << "\n";
//		}
//	}
//}