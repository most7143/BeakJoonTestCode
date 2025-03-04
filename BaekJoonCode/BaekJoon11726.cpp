//#include<iostream>
//
//using namespace std;
//
//int N;
//long D[1001];
//long mod = 10007;
//
////2×N 크기의 직사각형을 1×2와 2×1 타일을 이용하여 채울 수 있는 경우의 수를 구하는 문제
//
//int main()
//{
//	cin >> N;
//
//	D[1] = 1; //2x1의 경우의 수는 1가지
//	D[2] = 2; //2x2의 경우의 수는 2가지
//
//	for (int i = 3; i <= N; i++)
//	{
//		//DP 점화식
//		D[i] = (D[i - 1] + D[i - 2]) % mod;
//	}
//
//	cout << D[N];
//}