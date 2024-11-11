//#include <iostream>
//
//using namespace std;
//
////최대 공배수 함수 구하는 재귀 함수 (유클리드 호제법)
//int GCD(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return GCD(b, a % b);
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	int result = 0;
//
//	for (int i = 0; i < t; i++)
//	{
//		int a, b;
//
//		cin >> a >> b;
//
//		//최소 공배수  = 두 수의 곱 / 최대 공약수
//		result = a * b / GCD(a, b);
//
//		cout << result << "\n";
//	}
//}