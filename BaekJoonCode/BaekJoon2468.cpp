//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////4���� Ž�� �迭
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int n;
//
//int arr[101][101];
//
////�湮���� �ʱ�ȭ�� �����ϱ� ���� vector�� ����
//vector<vector<bool>> visited(101, vector<bool>(101, false));
//
////����
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
//			//�ִ� ���̸� ����
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
//					//�������� ī��Ʈ�� ���鼭 BFS�� ������ Ž��
//					cnt++;
//					BFS(i, j, k);
//				}
//			}
//		}
//
//		answer = max(answer, cnt);
//
//		//���̸� �缳�� �� �ٽ� Ž���� �ؾ��ϱ� ������ �ʱ�ȭ
//		visited = vector<vector<bool>>(101, vector<bool>(101, false));
//	}
//
//	cout << answer;
//}