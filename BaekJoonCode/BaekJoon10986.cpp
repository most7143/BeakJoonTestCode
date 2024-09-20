//#include <iostream>
//#include <vector>
//using namespace std;
//
////나머지 합 구하기 10986
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int m = 0;
//	int n = 0;
//	long answer = 0;
//
//	cin >> m >> n;
//
//	vector<long> add(m, 0);
//	vector<long> diviCount(n, 0);
//
//	cin >> add[0];
//	for (int i = 1; i < m; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		add[i] = add[i - 1] + temp;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int divi = add[i] % n;
//
//		if (divi == 0)
//		{
//			answer++;
//		}
//
//		diviCount[divi]++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		answer += diviCount[i] * (diviCount[i] - 1) / 2;
//	}
//
//	cout << answer;
//}