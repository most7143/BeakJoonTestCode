//#include <iostream>
//
//using namespace std;
//
//int N;
//long D[101][11]; // D[i][j] = 길이가 i인 계단에서 j 높이로 종료되는 계단 수를 만들 수 있는 경우의 수
//long mod = 1000000000;
//int main()
//{
//	cin >> N;
//
//	for (int i = 1; i <= 9; i++)
//	{
//		D[1][i] = 1;
//	}
//
//	for (int i = 2; i <= N; i++)
//	{
//		D[i][0] = D[i - 1][1]; // 끝이 0이면, 이전 자리의 1에서만 올 수 있음
//		D[i][9] = D[i - 1][8]; // 끝이 9이면, 이전 자리의 8에서만 올 수 있음
//
//		for (int j = 1; j <= 8; j++)
//		{
//			D[i][j] = (D[i - 1][j - 1] + D[i - 1][j + 1]) % mod;//0~9 까지의 계단수 설정
//		}
//	}
//
//	long sum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		sum = (sum + D[N][i]) % mod;
//	}
//
//	cout << sum;
//}