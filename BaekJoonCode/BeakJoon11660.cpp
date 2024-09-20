//#include <iostream>
//#include <vector>
//using namespace std;
//
////구간 합 구하기 5 11660
//int main()
//{
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int m;
//	int n;
//
//	cin >> m >> n;
//
//	vector<vector<int>> origin(m + 1, vector<int>(m + 1, 0));
//	vector<vector<int>> add(m + 1, vector<int>(m + 1, 0));
//
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> origin[i][j];
//			add[i][j] = add[i][j - 1] + add[i - 1][j] - add[i - 1][j - 1] + origin[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		cout << add[x2][y2] - add[x2][y1 - 1] - add[x1 - 1][y2] + add[x1 - 1][y1 - 1]<<"\n";
//	}
//}