//#include <iostream>
//
//using namespace std;
//
//void DFS(int number, int size);
//bool IsPrime(int number);
//
//static int N;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	int first[4] = { 2,3,5,7 };
//
//	//첫번째 자리수는 2,3,5,7만 확인하면 된다.
//	for (int i = 0; i < 4; i++)
//	{
//		DFS(first[i], 1);
//	}
//}
//
//void DFS(int number, int size)
//{
//	if (size == N)
//	{
//		if (IsPrime(number))
//		{
//			cout << number << "\n";
//		}
//
//		return;
//	}
//
//	//홀수만 확인하면된다.
//	for (int i = 1; i < 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//
//		//자리수를 게속 곱해주면서 자리수를 늘려간다.
//		if (IsPrime(number * 10 + i))
//		{
//			DFS(number * 10 + i, size + 1);
//		}
//	}
//}
//
////소수인지 확인하는 함수, number를 i로 나누었을때 값이 0이면 소수가 아니다, i의 최대값은 number값의 절반
//bool IsPrime(int number)
//{
//	for (int i = 2; i <= number / 2; i++)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}