//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//
//	long start = 1;
//	long end = K;
//	long answer = 0;
//
//	while (start <= end)
//	{
//		long mid = (start + end) / 2;
//		long target = 0;
//
//		for (int i = 1; i <= N; i++)
//		{
//			if (mid / i < N)
//			{
//				target += mid / i;
//			}
//			else
//			{
//				target += N;
//			}
//		}
//
//		if (target < K)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			answer = mid;
//			end = mid - 1;
//		}
//	}
//
//	cout << answer;
//}