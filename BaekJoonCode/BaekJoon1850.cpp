//#include <iostream>
//
//using namespace std;
//
////최대 공약수 (유클리드 호제법)
//int GCD(long a, long b)
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
//	long a, b;
//	cin >> a >> b;
//
//	long result = GCD(a, b);
//
//	//최대 공약수만큼 1의 갯수가 늘어나는 규칙을 이용
//	while (result > 0)
//	{
//		cout << "1";
//		result--;
//	}
//}