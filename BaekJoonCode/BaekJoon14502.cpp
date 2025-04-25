//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////사방향 이동 배열
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////처음 맵과, 벽이 세워질 맵을 선언
//int map[8][8];
//int temp[8][8];
//
//int m, n;
//
//int result;
//
////맵을 카피하는 함수
//void MapCopy(int a[8][8], int b[8][8])
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a[i][j] = b[i][j];
//		}
//	}
//}
//
//void BFS()
//{
//	queue<pair<int, int>> q;
//
//	// 벽이세워진 상태에서 바이러스를 퍼트릴 배열
//	int spread[8][8];
//
//	//벽 위치 복사
//	MapCopy(spread, temp);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (spread[i][j] == 2)
//			{
//				// 바이러스 위치를 queue에 담기 ( 배열에 있는 모든 바이러스가 동시에 퍼트려야하기 때문)
//				q.push({ i,j });
//			}
//		}
//	}
//
//	while (false == q.empty())
//	{
//		int a = q.front().first;
//		int b = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = a + dx[i];
//			int ny = b + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m && spread[nx][ny] == 0)
//			{
//				spread[nx][ny] = 2;
//				q.push({ nx,ny });
//			}
//		}
//	}
//
//	//안전 구역 갯수 저장
//	int cnt = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (spread[i][j] == 0)
//			{
//				cnt++;
//			}
//		}
//	}
//
//	//안전구역 갯수를 비교해 저장
//	result = max(result, cnt);
//}
//
////벽을 세우는 함수
//void Wall(int wallcnt)
//{
//	//벽이 3개가 세워졌으면 BFS실행
//	if (wallcnt == 3)
//	{
//		BFS();
//		return;
//	}
//	else
//	{
//		//재귀함수 로직, 벽이 배열의 끝까지 도달할 떄 까지 재귀호출
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (temp[i][j] == 0)
//				{
//					temp[i][j] = 1; // 벽을 세우고
//					Wall(wallcnt + 1); // 새로운 벽 생성 , 해당위치에 벽이 생성되었으면 자동적으로 벽이 없는 곳에 배치되어 생성됨
//					temp[i][j] = 0; // 백트랙킹이 되는 부분 . 이전에 생성되었던 벽을 지워줌
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> map[i][j];
//		}
//	}
//
//	MapCopy(temp, map);  // 시작할 때 한 번 복사
//	Wall(0);             // 벽 설치 0개부터 시작
//
//	cout << result;
//}