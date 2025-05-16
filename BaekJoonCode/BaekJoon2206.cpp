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
////�湮Ƚ���� �����ϱ� ���� �迭 [2]�� ���� �վ����� �ȶվ����� üũ�ϱ� ����
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
//		//���������� �Դٸ� ��ȯ
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
//			//arr�� ����� �ʴ��� ���� �˻�
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m)
//			{
//				//���� ����, ���� �湮���Ѱ��
//				if (arr[nx][ny] == 0 && false == visited[nx][ny][wall])
//				{
//					visited[nx][ny][wall] = visited[x][y][wall] + 1;
//					q.push({ { nx,ny },wall });
//				}
//
//				//���� �ְ�, ���� ���� ���� ���
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