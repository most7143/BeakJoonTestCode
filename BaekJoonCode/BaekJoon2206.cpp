//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int arr[1001][1001];
//
////방문횟수를 저장하기 위한 배열 [2]는 벽을 뚫었는지 안뚫었는지 체크하기 위함
//int visited[1001][1001][2];
//
//int n, m;
//
//int BFS()
//{
//	queue<pair<pair<int, int>, int>> q;
//
//	q.push({ { 0,0 } , 0 });
//	visited[0][0][0] = 1;
//
//	while (false == q.empty())
//	{
//		pair<pair<int, int>, int> cur = q.front();
//		q.pop();
//
//		int x = cur.first.first;
//		int y = cur.first.second;
//		int wall = cur.second;
//
//		//도착지점에 왔다면 반환
//		if (x == n - 1 && y == m - 1)
//		{
//			return visited[x][y][wall];
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			//arr를 벗어나지 않는지 부터 검사
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m)
//			{
//				//벽이 없고, 아직 방문안한경우
//				if (arr[nx][ny] == 0 && false == visited[nx][ny][wall])
//				{
//					visited[nx][ny][wall] = visited[x][y][wall] + 1;
//					q.push({ { nx,ny },wall });
//				}
//
//				//벽이 있고, 벽을 뚫지 않은 경우
//				if (arr[nx][ny] == 1 && wall == 0)
//				{
//					visited[nx][ny][wall + 1] = visited[x][y][wall] + 1;
//					q.push({ {nx,ny},wall + 1 });
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			char temp;
//			cin >> temp;
//			arr[i][j] = temp - '0';
//		}
//	}
//
//	cout << BFS();
//}