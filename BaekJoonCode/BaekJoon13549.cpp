//#include <iostream>
//#include <deque>
//#include <vector>
//using namespace std;
//
//const int MAX = 100000;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//
//	//��ġ,�ð��� ����
//	deque<pair<int, int>>dq;
//
//	//������ �ش� ��ġ�� �ð��� ����
//	vector<int> visited(MAX + 1, 1e9);
//
//	//�������� �߰�
//	dq.push_back({ N,0 });
//	visited[N] = 0;
//
//	while (false == dq.empty())
//	{
//		//�տ��� ���� �ϳ��� �����鼭 �����Ѵ�. ( �����̵��� ���� ����Ǿ�� �ϱ� ������ �տ� �߰���)
//		int pos = dq.front().first;
//		int time = dq.front().second;
//
//		dq.pop_front();
//
//		if (pos == K)
//		{
//			cout << time;
//			return 0;
//		}
//
//		if (pos * 2 <= MAX && visited[pos * 2] > time)
//		{
//			visited[pos * 2] = time;
//			dq.push_front({ pos * 2,time });
//		}
//
//		if (pos + 1 <= MAX && visited[pos + 1] > time + 1)
//		{
//			visited[pos + 1] = time + 1;
//			dq.push_back({ pos + 1,time + 1 });
//		}
//
//		if (pos - 1 >= 0 && visited[pos - 1] > time + 1)
//		{
//			visited[pos - 1] = time - 1;
//			dq.push_back({ pos - 1,time + 1 });
//		}
//	}
//}