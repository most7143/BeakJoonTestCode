//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
////���� �ð���, ����ð��� ���� �ڷᱸ�� �߰�
//vector<pair<int, int>> ClassTime;
//
////����ð��� ���� �켱���� ť �߰�(��������) - ����ð��� �ڵ������� ������ ���� ���� ������ ���ǽ��� �� �� ����
//priority_queue<int, vector<int>, greater<int>> MyQueue;
//
//int N;
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int s, t;
//		cin >> s >> t;
//
//		ClassTime.push_back({ s,t });
//	}
//
//	//���۽ð��� �������� ����
//	sort(ClassTime.begin(), ClassTime.end());
//
//	MyQueue.push(ClassTime[0].second);
//
//	for (int i = 1; i < N; i++)
//	{
//		if (MyQueue.top() <= ClassTime[i].first)
//		{
//			MyQueue.pop();
//		}
//
//		MyQueue.push(ClassTime[i].second);
//	}
//
//	cout << MyQueue.size();
//}