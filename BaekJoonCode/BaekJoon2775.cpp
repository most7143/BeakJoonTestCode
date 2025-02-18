//#include<iostream>
//
//using namespace std;
//
//int T, N, K;
//int D[15][15];
//
//int main()
//{
//	for (int i = 0; i < 15; i++)
//	{
//		D[i][1] = 1;
//		D[0][i] = i;
//	}
//
//	for (int i = 1; i < 15; i++)
//	{
//		for (int j = 2; j < 15; j++)
//		{
//			D[i][j] = D[i][j - 1] + D[i - 1][j];
//		}
//	}
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> N >> K;
//		cout << D[N][K] << "\n";
//	}
//}