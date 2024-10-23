//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////dx, dy의 사방향 좌표 상(0,1), 하(0,-1), 좌(-1,0), 우(1,0)
//static int dx[] = { 0,0,-1,1 };
//static int dy[] = { 1,-1,0,0 };
//
////미로의 최대길이를 미리 선언한다.
//static int A[101][101];
//static bool Visited[101][101];
//static int N, M;
//void BFS(int i, int j);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < M; j++)
//		{
//			A[i][j] = s[j] - '0';
//		}
//	}
//
//	BFS(0, 0);
//
//	cout << A[N - 1][M - 1];
//}
//
//void BFS(int i, int j)
//{
//	queue<pair<int, int>> myQueue;
//	myQueue.push(make_pair(i, j));
//
//	while (!myQueue.empty())
//	{
//		int now[2];
//		now[0] = myQueue.front().first;
//		now[1] = myQueue.front().second;
//
//		myQueue.pop();
//		Visited[i][j] = true;
//
//		//상하좌우 모두 탐색
//		for (int k = 0; k < 4; k++)
//		{
//			int x = now[0] + dx[k];
//			int y = now[1] + dy[k];
//
//			//x,y 값이 미로 크기를 벗어나지 않는지 체크
//			if (x >= 0 && y >= 0
//				&& x < N && y < M)
//			{
//				//0이 아니거나, 방문한 적이 없는지 체크
//				if (A[x][y] != 0 && !Visited[x][y])
//				{
//					Visited[x][y] = true;
//
//					//미로 값에 값을 넣어 도달에 필요한 횟수를 게속 업데이트
//					A[x][y] = A[now[0]][now[1]] + 1;
//
//					myQueue.push(make_pair(x, y));
//				}
//			}
//		}
//	}
//}