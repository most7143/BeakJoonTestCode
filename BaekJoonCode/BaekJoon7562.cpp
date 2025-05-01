//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////8방향 이동 배열
//int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
//int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
//
//int arr[301][301];
//bool visited[301][301];
//
//int textCase = 0;
//
//int l = 0;
//int startX, startY = 0;
//int endX, endY = 0;
//
//void Clear(int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			arr[i][j] = 0;
//			visited[i][j] = false;
//		}
//	}
//}
//
//void BFS()
//{
//	queue<pair<int, int>> q;
//
//	q.push({ startX,startY });
//
//	visited[startX][startY];
//
//	while (false == q.empty())
//	{
//		pair<int, int> cur = q.front();
//		int x = cur.first;
//		int y = cur.second;
//
//		//검사를 줄이기 위해 도착했다면 바로 출력
//		if (x == endX && y == endY)
//		{
//			cout << arr[x][y] << endl;
//			break;
//		}
//
//		q.pop();
//
//		for (int i = 0; i < 8; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < l && ny < l && false == visited[nx][ny])
//			{
//				//이전 좌표의 값을 도착좌표에 더해줌
//				arr[nx][ny] = arr[x][y] + 1;
//				visited[nx][ny] = true;
//				q.push({ nx,ny });
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
//	cin >> textCase;
//
//	for (int i = 0; i < textCase; i++)
//	{
//		cin >> l;
//		cin >> startX >> startY;
//		cin >> endX >> endY;
//
//		BFS();
//
//		Clear(l);
//	}
//}