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
//	//위치,시간을 저장
//	deque<pair<int, int>>dq;
//
//	//도착시 해당 위치의 시간을 저장
//	vector<int> visited(MAX + 1, 1e9);
//
//	//시작지점 추가
//	dq.push_back({ N,0 });
//	visited[N] = 0;
//
//	while (false == dq.empty())
//	{
//		//앞에서 부터 하나씩 뽑으면서 진행한다. ( 순간이동이 먼저 선행되어야 하기 때문에 앞에 추가함)
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