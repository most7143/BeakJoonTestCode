//#include <iostream>
//
//using namespace std;
//
////0과 1을 저장할 배열
//int fibonacci[41][2];
//int T;
//
//void Fibonacci(int n)
//{
//	fibonacci[0][0] = 1;
//	fibonacci[0][1] = 0;
//
//	fibonacci[1][0] = 0;
//	fibonacci[1][1] = 1;
//
//	//2부터 n까지 돌면서 0과 1을 저장하는 DP
//	for (int i = 2; i <= n; i++)
//	{
//		fibonacci[i][0] = fibonacci[i - 1][0] + fibonacci[i - 2][0];
//		fibonacci[i][1] = fibonacci[i - 1][1] + fibonacci[i - 2][1];
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> T;
//
//	Fibonacci(40);
//
//	for (int i = 0; i < T; i++)
//	{
//		int n;
//		cin >> n;
//
//		cout << fibonacci[n][0] << " " << fibonacci[n][1] << endl;
//	}
//}