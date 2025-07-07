//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string N;
//
//int main()
//{
//	cin >> N;
//
//	int sum = 0;
//	bool isZero = false;
//	for (int i = 0; i < N.length(); i++)
//	{
//		if (N[i] == '0')
//		{
//			isZero = true;
//		}
//
//		sum += N[i] - '0';
//	}
//
//	if (false == isZero || sum % 3 != 0)
//	{
//		cout << "-1";
//	}
//	else
//	{
//		sort(N.begin(), N.end(), greater<int>());
//		cout << N;
//	}
//}