//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////аж╦Ы  1940
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n = 0;
//	int m = 0;
//	cin >> n >> m;
//
//	int startIndex = 0;
//	int endIndex = n - 1;
//
//	vector<int> list(n, 0);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> list[i];
//	}
//
//	sort(list.begin(), list.end());
//
//	int count = 0;
//
//	while (startIndex < endIndex)
//	{
//		int sum = list[startIndex] + list[endIndex];
//		if (sum == m)
//		{
//			count++;
//			startIndex++;
//			endIndex--;
//		}
//		else if (sum < m)
//		{
//			startIndex++;
//		}
//		else
//		{
//			endIndex--;
//		}
//	}
//
//	cout << count;
//}