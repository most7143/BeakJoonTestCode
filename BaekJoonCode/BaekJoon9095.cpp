//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int testCase;
//	int n;
//
//	cin >> testCase;
//
//	int d[12];
//
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//
//	for (int i = 4; i < 11; i++)
//	{
//		d[i] = d[i - 3] + d[i - 2] + d[i - 1];
//	}
//
//	for (int i = 0; i < testCase; i++)
//	{
//		cin >> n;
//
//		cout << d[n] << endl;
//	}
//}