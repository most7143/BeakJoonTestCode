//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//int main()
//{
//	// 'edge'라는 이름의 튜플 타입을 정의. (출발 도시, 도착 도시, 가격)
//	typedef tuple<int, int, int> edge;
//
//	// N: 도시의 수, M: 도로의 수, startCity: 시작 도시, endCity: 목적 도시
//	int N, M, startCity, endCity;
//
//	// mDistance: 각 도시에 도달할 수 있는 최대 금액을 저장하는 벡터
//	// cityMoney: 각 도시에 있는 돈을 저장하는 벡터
//	vector<long> mDistance, cityMoney;
//
//	// edges: 각 도로의 정보를 저장하는 벡터 (출발 도시, 도착 도시, 도로의 가격)
//	vector<edge> edges;
//
//	cin >> N >> startCity >> endCity >> M;
//
//	mDistance.resize(N);
//	cityMoney.resize(N);
//
//	// mDistance는 처음에 모두 최소값으로 설정 (아직 도달할 수 없는 상태)
//	fill(mDistance.begin(), mDistance.end(), LONG_MIN);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, e, p;
//		cin >> s >> e >> p;
//		edges.push_back(make_tuple(s, e, p));
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> cityMoney[i];
//	}
//
//	// 시작 도시에는 그 도시의 금액을 초기화
//	mDistance[startCity] = cityMoney[startCity];
//
//	// 벨만-포드 알고리즘 수행 (최대 N+50번 반복)
//	for (int i = 0; i <= N + 50; i++)
//	{
//		// 모든 도로를 한 번씩 순회하면서 최댓값 갱신
//		for (int j = 0; j < M; j++)
//		{
//			int start = get<0>(edges[j]);  // 도로의 출발 도시
//			int end = get<1>(edges[j]);    // 도로의 도착 도시
//			int price = get<2>(edges[j]);  // 도로를 이용하는 비용
//
//			// 출발 도시의 금액이 아직 도달할 수 없으면 무시
//			if (mDistance[start] == LONG_MIN)
//			{
//				continue;
//			}
//			// 출발 도시가 무한대에 도달한 경우, 도착 도시도 무한대 처리
//			else if (mDistance[start] == LONG_MAX)
//			{
//				mDistance[end] = LONG_MAX;
//			}
//			// 도착 도시의 금액을 갱신 (출발 도시의 금액 + 도착 도시의 돈 - 도로 비용)
//			else if (mDistance[end] < mDistance[start] + cityMoney[end] - price)
//			{
//				mDistance[end] = mDistance[start] + cityMoney[end] - price;
//
//				// N번째 반복 후에도 값이 갱신되면 음수 사이클이 존재하는 것
//				if (i >= N - 1)
//				{
//					mDistance[end] = LONG_MAX;
//				}
//			}
//		}
//	}
//
//	if (mDistance[endCity] == LONG_MIN)
//	{
//		// 목적 도시에 도달할 수 없으면 "gg" 출력
//		cout << "gg";
//	}
//	else if (mDistance[endCity] == LONG_MAX)
//	{
//		// 목적 도시에 무한대 금액이 도달했으면 "Gee" 출력
//		cout << "Gee";
//	}
//	else
//	{
//		cout << mDistance[endCity];
//	}
//}