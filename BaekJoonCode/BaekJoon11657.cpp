//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <limits.h>
//
//using namespace std;
//
//// edge는 (시작 노드, 끝 노드, 가중치)를 나타내는 튜플
//typedef tuple<int, int, int> edge;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M; // N: 노드 개수, M: 간선 개수
//	vector<long> minDistance;  // 각 노드의 최단 거리를 저장하는 벡터
//	vector<edge> edges;      // 간선 정보를 저장하는 벡터
//
//	cin >> N >> M;
//
//	minDistance.resize(N + 1);  // N+1 크기로 벡터 할당 (1-based index 사용)
//	fill(minDistance.begin(), minDistance.end(), LONG_MAX); // 벡터를 무한대로 초기화
//
//	for (int i = 0; i < M; i++)
//	{
//		int start, end, time;
//		cin >> start >> end >> time;  // 간선의 시작, 끝 노드, 가중치 입력
//		edges.push_back(make_tuple(start, end, time));  // 간선 정보를 edges 벡터에 저장
//	}
//
//	minDistance[1] = 0;  // 출발 노드 1의 거리는 0으로 설정
//
//	// 벨만-포드 알고리즘 (최단 거리 계산)
//	// N-1번 반복하여 모든 간선을 검토하면서 최단 거리를 갱신
//	for (int i = 1; i < N; i++)  // 최대 N-1번 반복
//	{
//		for (int j = 0; j < M; j++)  // M개의 간선에 대해 반복
//		{
//			edge medge = edges[j];  // j번째 간선 가져오기
//			int start = get<0>(medge);
//			int end = get<1>(medge);
//			int time = get<2>(medge);
//
//			// 만약 start -> end로 가는 경로가 현재보다 더 짧다면
//			if (minDistance[start] != LONG_MAX && minDistance[end] > minDistance[start] + time)
//			{
//				minDistance[end] = minDistance[start] + time;  // 최단 거리 갱신
//			}
//		}
//	}
//
//	// 음수 사이클이 존재하는지 체크
//	bool mCycle = false;
//
//	// 마지막에 다시 한 번 모든 간선을 확인하여 음수 사이클을 체크
//	for (int i = 0; i < M; i++)  // M개의 간선에 대해 반복
//	{
//		edge medge = edges[i];
//		int start = get<0>(medge);
//		int end = get<1>(medge);
//		int time = get<2>(medge);
//
//		// 만약 start -> end로 가는 경로가 아직도 갱신된다면 음수 사이클 존재
//		if (minDistance[start] != LONG_MAX && minDistance[end] > minDistance[start] + time)
//		{
//			mCycle = true;  // 음수 사이클 발견
//		}
//	}
//
//	// 음수 사이클이 없다면 각 노드의 최단 거리 출력
//	if (!mCycle)
//	{
//		for (int i = 2; i <= N; i++)  // 노드 2번부터 N번까지 반복
//		{
//			if (minDistance[i] == LONG_MAX)  // 도달할 수 없는 노드라면 -1 출력
//			{
//				cout << "-1" << "\n";
//			}
//			else  // 최단 거리가 존재하면 그 값을 출력
//			{
//				cout << minDistance[i] << "\n";
//			}
//		}
//	}
//	else  // 음수 사이클이 존재하면 -1 출력
//	{
//		cout << "-1";
//	}
//}