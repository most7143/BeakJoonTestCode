//#include<iostream>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
////뒤집은수가 일치하는 지 체크하는 함수
//bool IsPalin(int a);
//
//int main()
//{
//	const int maxSize = 10000001;
//
//	//배열의 크기가 커 힙으로 할당
//	int* A = new int[maxSize];
//
//	int N;
//	cin >> N;
//
//	for (int i = 2; i < maxSize; i++)
//	{
//		A[i] = i;
//	}
//
//	//소수는 i의 제곱근을 넘지 않는다.
//	for (int i = 2; i < sqrt(maxSize); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		for (int j = i * 2; j <= maxSize; j += i)
//		{
//			A[j] = 0;
//		}
//	}
//
//	//N보다 크며, 그 중 가장 작은 값부터 탐색
//	for (int i = 0; i < maxSize; i++)
//	{
//		if (A[i] >= N)
//		{
//			if (IsPalin(A[i]))
//			{
//				cout << A[i];
//				break;
//			}
//		}
//	}
//}
//
//bool IsPalin(int a)
//{
//	//비교를 위해 string으로 형변환
//	string str = to_string(a);
//
//	int start = 0;
//	int end = str.size() - 1;
//
//	//start와 end를 비교해 값이 같을때마다 위치를 이동.
//	while (start < end)
//	{
//		if (str[start] != str[end])
//		{
//			return false;
//		}
//
//		start++;
//		end--;
//	}
//
//	return true;
//}