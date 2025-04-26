//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////4방향 탐색 배열
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int n;
//
//int arr[101][101];
//
////방문여부 초기화를 쉽게하기 위해 vector로 선언
//vector<vector<bool>> visited(101, vector<bool>(101, false));
//
////높이
//int h = 0;
//
//int answer = 0;
//
//void BFS(int x, int y, int h)
//{
//	queue<pair<int, int>> q;
//
//	q.push({ x,y });
//
//	visited[x][y] = true;
//
//	while (false == q.empty())
//	{
//		pair<int, int> cur = q.front();
//
//		q.pop();
//
//		int x = cur.first;
//		int y = cur.second;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < n && ny < n && arr[nx][ny] >= h && false == visited[nx][ny])
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
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//
//			//최대 높이를 설정
//			h = max(h, arr[i][j]);
//		}
//	}
//
//	for (int k = 1; k <= h; k++)
//	{
//		int cnt = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (arr[i][j] >= k && false == visited[i][j])
//				{
//					//안전구역 카운트를 세면서 BFS를 끝까지 탐색
//					cnt++;
//					BFS(i, j, k);
//				}
//			}
//		}
//
//		answer = max(answer, cnt);
//
//		//높이를 재설정 후 다시 탐색을 해야하기 때문에 초기화
//		visited = vector<vector<bool>>(101, vector<bool>(101, false));
//	}
//
//	cout << answer;
//}