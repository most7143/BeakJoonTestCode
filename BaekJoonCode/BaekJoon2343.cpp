//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//
//	cin >> N >> M;
//
//	vector<int> A(N, 0);
//	int start = 0;
//	int end = 0;
//
//	//이진 탐색의 범위를 설정하기 위해 start와, end의 값을 배분
//	//start: A의 배열중 가장 큰값으로 설정(그래야 모든 요소를 포함할 수 있다.)
//	//end: 모든 배열의 합으로 설정(모든 배열을 더한 값보다 넘어설 순 없다.)
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//
//		if (start < A[i])
//		{
//			start = A[i];
//		}
//
//		end += A[i];
//	}
//
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		int sum = 0;
//		int count = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (sum + A[i] > mid)
//			{
//				count++;
//				sum = 0;
//			}
//
//			sum += A[i];
//		}
//
//		if (sum != 0)
//		{
//			count++;
//		}
//
//		if (count > M)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			end = mid - 1;
//		}
//	}
//
//	cout << start;
//}