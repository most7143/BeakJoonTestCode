//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	const int MaxSize = 10000001;
//
//	long min, max;
//
//	cin >> min >> max;
//
//	//배열의 크기가 커 힙에 할당.
//	long* A = new long[MaxSize];
//
//	for (int i = 2; i < MaxSize; i++)
//	{
//		A[i] = i;
//	}
//
//	//i는 MaxSize의 제곱근을 넘지 않는다.
//	for (int i = 2; i <= sqrt(MaxSize); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		//j 증가량에 i를 더해 배수로 게속 더해지도록 한다.
//		for (int j = i * 2; j < MaxSize; j += i)
//		{
//			A[j] = 0;
//		}
//	}
//
//	int count = 0;
//
//	for (int i = 2; i < MaxSize; i++)
//	{
//		if (A[i] != 0)
//		{
//			long temp = A[i];
//
//
//			//변수 표현 범위 초과 오류를 막기 위해 double로 변경 및 나눗셈 처리
//			while ((double)A[i] <= (double)max / (double)temp)
//			{
//				if ((double)A[i] >= (double)min / (double)temp)
//				{
//					count++;
//				}
//
//				temp *= A[i];
//			}
//		}
//	}
//
//	cout << count;
//
//	delete[] A; // 동적 메모리 해제
//}