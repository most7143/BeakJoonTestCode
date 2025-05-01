//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////8방향 이동
//int dx[8] = { -1,0,1,1,1,0,-1,-1 };
//int dy[8] = { 1,1,1,0,-1,-1,-1,0 };
//
//int arr[51][51];
//bool visited[51][51];
//
//int w, h = 1;
//
//int cnt = 0;
//
//void Clear(int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			arr[i][j] = 0;
//			visited[i][j] = false;
//		}
//	}
//
//	cnt = 0;
//}
//
//void BFS(int x, int y)
//{
//	queue<pair<int, int>> q;
//
//	q.push({ x, y });
//
//	visited[x][y] = true;
//
//	while (false == q.empty())
//	{
//		pair<int, int> now = q.front();
//
//		q.pop();
//
//		int x = now.first;
//		int y = now.second;
//
//		for (int i = 0; i < 8; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < h && ny < w && arr[nx][ny] == 1 && false == visited[nx][ny])
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	while (true)
//	{
//		cin >> w >> h;
//
//		if (w == 0 && h == 0)
//		{
//			break;
//		}
//
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				if (arr[i][j] == 1 && false == visited[i][j])
//				{
//					cnt++;
//					BFS(i, j);
//				}
//			}
//		}
//
//		cout << cnt << endl;
//
//		Clear(h, w);
//	}
//}