//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int m, n, h;
//
////6방향 방향 배열 추가
//int dx[6] = { -1,1,0,0,0,0 };
//int dy[6] = { 0,0,-1,1,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//
//int arr[101][101][101];
//
//int result = 0;
//
//queue<pair<pair<int, int>, int>> q;
//
//void BFS()
//{
//	while (false == q.empty())
//	{
//		pair<pair<int, int >, int> cur = q.front();
//
//		int x = cur.first.first;
//		int y = cur.first.second;
//		int z = cur.second;
//
//		q.pop();
//
//		for (int i = 0; i < 6; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			int nz = z + dz[i];
//
//			if (nx >= 0 && ny >= 0 && nz >= 0 && nx < n && ny < m && nz < h && arr[nx][ny][nz] == 0)
//			{
//				arr[nx][ny][nz] = arr[x][y][z] + 1;
//
//				q.push({ {nx,ny},nz });
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> m >> n >> h;
//
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				cin >> arr[j][k][i];
//
//				if (arr[j][k][i] == 1)
//				{
//					q.push({ {j,k},i });
//				}
//			}
//		}
//	}
//
//	BFS();
//
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				if (arr[j][k][i] == 0)
//				{
//					cout << "-1";
//					return 0;
//				}
//
//				result = max(arr[j][k][i], result);
//			}
//		}
//	}
//
//	cout << result - 1;
//}