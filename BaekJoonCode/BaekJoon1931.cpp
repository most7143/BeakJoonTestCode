//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int count = 0;
//	int endTime = 0;
//	vector<pair<int, int>> A(N);
//
//	//종료 시간을 기준으로 정렬을하기 위해 first를 넣는다.(종료시간이 짧은 순으로 탐색하기 위해.)
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i].second;
//		cin >> A[i].first;
//	}
//
//	sort(A.begin(), A.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		//시작시간과 종료시간을 비교한다. 이미 정렬을 한 후라, 현재 종료시간에서 부터 가장 가까운 시작시간이 탐색된다.
//		if (A[i].second >= endTime)
//		{
//			endTime = A[i].first;
//			count++;
//		}
//	}
//
//	cout << count;
//}