//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, K;
//
//	//크기는 N의 최대크기+1
//	int D[11][11];
//
//	cin >> N >> K;
//
//	//이항 계수의 기본 규칙을 적용
//	for (int i = 0; i <= N; i++)
//	{
//		D[i][1] = i; // 하나를 고르는 경우 항목 수와 동일
//		D[i][0] = 1; // 어떤 수에서 0개를 고르는 경우 1
//		D[i][i] = 1; // 자기 자신을 고르는 경우 1
//	}
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			//이항 계수의 점화식
//			D[i][j] = D[i - 1][j] + D[i - 1][j - 1];
//		}
//	}
//
//	cout << D[N][K];
//}