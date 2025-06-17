//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int coin[4] = { 25,10,5,1 };
//	int n;
//
//	cin >> n;
//
//	int t;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//
//		for (int j = 0; j < 4; j++)
//		{
//			cout << t / coin[j] << " ";
//			t %= coin[j];
//		}
//
//		cout << endl;
//	}
//}