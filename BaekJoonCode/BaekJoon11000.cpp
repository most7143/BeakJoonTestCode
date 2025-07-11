//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
////시작 시간과, 종료시간을 담을 자료구조 추가
//vector<pair<int, int>> ClassTime;
//
////종료시간을 담을 우선순위 큐 추가(오름차순) - 종료시간을 자동적으로 정렬해 가장 먼저 끝나는 강의실을 알 수 있음
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
//	//시작시간을 기준으로 정렬
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