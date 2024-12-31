//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//int main()
//{
//	// 'edge'��� �̸��� Ʃ�� Ÿ���� ����. (��� ����, ���� ����, ����)
//	typedef tuple<int, int, int> edge;
//
//	// N: ������ ��, M: ������ ��, startCity: ���� ����, endCity: ���� ����
//	int N, M, startCity, endCity;
//
//	// mDistance: �� ���ÿ� ������ �� �ִ� �ִ� �ݾ��� �����ϴ� ����
//	// cityMoney: �� ���ÿ� �ִ� ���� �����ϴ� ����
//	vector<long> mDistance, cityMoney;
//
//	// edges: �� ������ ������ �����ϴ� ���� (��� ����, ���� ����, ������ ����)
//	vector<edge> edges;
//
//	cin >> N >> startCity >> endCity >> M;
//
//	mDistance.resize(N);
//	cityMoney.resize(N);
//
//	// mDistance�� ó���� ��� �ּҰ����� ���� (���� ������ �� ���� ����)
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
//	// ���� ���ÿ��� �� ������ �ݾ��� �ʱ�ȭ
//	mDistance[startCity] = cityMoney[startCity];
//
//	// ����-���� �˰��� ���� (�ִ� N+50�� �ݺ�)
//	for (int i = 0; i <= N + 50; i++)
//	{
//		// ��� ���θ� �� ���� ��ȸ�ϸ鼭 �ִ� ����
//		for (int j = 0; j < M; j++)
//		{
//			int start = get<0>(edges[j]);  // ������ ��� ����
//			int end = get<1>(edges[j]);    // ������ ���� ����
//			int price = get<2>(edges[j]);  // ���θ� �̿��ϴ� ���
//
//			// ��� ������ �ݾ��� ���� ������ �� ������ ����
//			if (mDistance[start] == LONG_MIN)
//			{
//				continue;
//			}
//			// ��� ���ð� ���Ѵ뿡 ������ ���, ���� ���õ� ���Ѵ� ó��
//			else if (mDistance[start] == LONG_MAX)
//			{
//				mDistance[end] = LONG_MAX;
//			}
//			// ���� ������ �ݾ��� ���� (��� ������ �ݾ� + ���� ������ �� - ���� ���)
//			else if (mDistance[end] < mDistance[start] + cityMoney[end] - price)
//			{
//				mDistance[end] = mDistance[start] + cityMoney[end] - price;
//
//				// N��° �ݺ� �Ŀ��� ���� ���ŵǸ� ���� ����Ŭ�� �����ϴ� ��
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
//		// ���� ���ÿ� ������ �� ������ "gg" ���
//		cout << "gg";
//	}
//	else if (mDistance[endCity] == LONG_MAX)
//	{
//		// ���� ���ÿ� ���Ѵ� �ݾ��� ���������� "Gee" ���
//		cout << "Gee";
//	}
//	else
//	{
//		cout << mDistance[endCity];
//	}
//}