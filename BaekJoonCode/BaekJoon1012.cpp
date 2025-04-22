//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//// 이동을 위한 배열
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////가로, 세로, 1의 위치 갯수
//int n, m, k;
//
////초기화 하기 쉽게 벡터로 선언
//vector<vector<int>> arr(51, vector<int>(51, 0));
//vector<vector<bool>> visited(51, vector<bool>(51, false));
//int result = 0;
//
//void BFS(int x, int y)
//{
//	queue<pair<int, int>> q;
//
//	q.push({ x, y });
//	visited[x][y] = true;
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
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] == 1 && false == visited[nx][ny])
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
//	int caseCount;
//
//	cin >> caseCount;
//
//	for (int i = 0; i < caseCount; i++)
//	{
//		cin >> n >> m >> k;
//
//		//1의 위치를 설정
//		for (int j = 0; j < k; j++)
//		{
//			int x, y;
//			cin >> x >> y;
//			arr[x][y] = 1;
//		}
//
//		//전체 탐색 시작
//		for (int w = 0; w < n; w++)
//		{
//			for (int h = 0; h < m; h++)
//			{
//				//탐색 횟수를 줄이기 위해 조건 추가
//				if (arr[w][h] == 1 && false == visited[w][h])
//				{
//					result++;
//					BFS(w, h);
//				}
//			}
//		}
//
//		//테스트 케이스가 새로 설정하기 위해 배열과 방분여부를 초기화
//		arr = vector<vector<int>>(51, vector<int>(51, 0));
//		visited = vector<vector<bool>>(51, vector<bool>(51, false));
//		cout << result << endl;
//		result = 0;
//	}
//}