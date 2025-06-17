//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n;
//int minRope = 0; //들어올릴 로프 중 최소 중량
//int sum = 0; // 들어올릴 로프들의 최대 중량
//vector<int> A;
//
//int main()
//{
//	cin >> n;
//
//	int result = 10000;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//
//		cin >> a;
//
//		A.push_back(a);
//	}
//
//	if (n == 1)
//	{
//		cout << A[0];
//	}
//	else
//	{
//		//내림차순 정렬
//		sort(A.rbegin(), A.rend());
//
//		minRope = A[0];
//
//		int result = 0;
//
//		for (int i = 1; i < n; i++)
//		{
//			if (minRope > A[i])
//			{
//				minRope = A[i];
//			}
//
//			//i+1 = 현재 연결된 로프의 수, 최소 로프 무게와 곱해줘 들 수 있는 무게를 계산
//			sum = minRope * (i + 1);
//
//			if (result < sum)
//			{
//				result = sum;
//			}
//		}
//
//		cout << result;
//	}
//}