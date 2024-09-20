//#include <iostream>
//#include <vector>
//using namespace std;
//
////수들의 합 5 10986
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n = 0;
//	cin >> n;
//
//	int startIndex = 0;
//	int endIndex = 0;
//	int sum = 0;
//
//	int count = 0;
//
//	while (endIndex != n)
//	{
//		if (sum == n)
//		{
//			count++;
//			endIndex++;
//			sum += endIndex;
//		}
//		else if (sum > n)
//		{
//			sum -= startIndex;
//			startIndex++;
//		}
//		else if (sum < n)
//		{
//			endIndex++;
//			sum += endIndex;
//		}
//	}
//
//	count++;
//
//	cout << count;
//}