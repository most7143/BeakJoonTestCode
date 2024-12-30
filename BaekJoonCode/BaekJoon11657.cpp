//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <limits.h>
//
//using namespace std;
//
//// edge�� (���� ���, �� ���, ����ġ)�� ��Ÿ���� Ʃ��
//typedef tuple<int, int, int> edge;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M; // N: ��� ����, M: ���� ����
//	vector<long> minDistance;  // �� ����� �ִ� �Ÿ��� �����ϴ� ����
//	vector<edge> edges;      // ���� ������ �����ϴ� ����
//
//	cin >> N >> M;
//
//	minDistance.resize(N + 1);  // N+1 ũ��� ���� �Ҵ� (1-based index ���)
//	fill(minDistance.begin(), minDistance.end(), LONG_MAX); // ���͸� ���Ѵ�� �ʱ�ȭ
//
//	for (int i = 0; i < M; i++)
//	{
//		int start, end, time;
//		cin >> start >> end >> time;  // ������ ����, �� ���, ����ġ �Է�
//		edges.push_back(make_tuple(start, end, time));  // ���� ������ edges ���Ϳ� ����
//	}
//
//	minDistance[1] = 0;  // ��� ��� 1�� �Ÿ��� 0���� ����
//
//	// ����-���� �˰��� (�ִ� �Ÿ� ���)
//	// N-1�� �ݺ��Ͽ� ��� ������ �����ϸ鼭 �ִ� �Ÿ��� ����
//	for (int i = 1; i < N; i++)  // �ִ� N-1�� �ݺ�
//	{
//		for (int j = 0; j < M; j++)  // M���� ������ ���� �ݺ�
//		{
//			edge medge = edges[j];  // j��° ���� ��������
//			int start = get<0>(medge);
//			int end = get<1>(medge);
//			int time = get<2>(medge);
//
//			// ���� start -> end�� ���� ��ΰ� ���纸�� �� ª�ٸ�
//			if (minDistance[start] != LONG_MAX && minDistance[end] > minDistance[start] + time)
//			{
//				minDistance[end] = minDistance[start] + time;  // �ִ� �Ÿ� ����
//			}
//		}
//	}
//
//	// ���� ����Ŭ�� �����ϴ��� üũ
//	bool mCycle = false;
//
//	// �������� �ٽ� �� �� ��� ������ Ȯ���Ͽ� ���� ����Ŭ�� üũ
//	for (int i = 0; i < M; i++)  // M���� ������ ���� �ݺ�
//	{
//		edge medge = edges[i];
//		int start = get<0>(medge);
//		int end = get<1>(medge);
//		int time = get<2>(medge);
//
//		// ���� start -> end�� ���� ��ΰ� ������ ���ŵȴٸ� ���� ����Ŭ ����
//		if (minDistance[start] != LONG_MAX && minDistance[end] > minDistance[start] + time)
//		{
//			mCycle = true;  // ���� ����Ŭ �߰�
//		}
//	}
//
//	// ���� ����Ŭ�� ���ٸ� �� ����� �ִ� �Ÿ� ���
//	if (!mCycle)
//	{
//		for (int i = 2; i <= N; i++)  // ��� 2������ N������ �ݺ�
//		{
//			if (minDistance[i] == LONG_MAX)  // ������ �� ���� ����� -1 ���
//			{
//				cout << "-1" << "\n";
//			}
//			else  // �ִ� �Ÿ��� �����ϸ� �� ���� ���
//			{
//				cout << minDistance[i] << "\n";
//			}
//		}
//	}
//	else  // ���� ����Ŭ�� �����ϸ� -1 ���
//	{
//		cout << "-1";
//	}
//}