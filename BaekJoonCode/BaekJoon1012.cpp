//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//// �̵��� ���� �迭
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////����, ����, 1�� ��ġ ����
//int n, m, k;
//
////�ʱ�ȭ �ϱ� ���� ���ͷ� ����
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
//		//1�� ��ġ�� ����
//		for (int j = 0; j < k; j++)
//		{
//			int x, y;
//			cin >> x >> y;
//			arr[x][y] = 1;
//		}
//
//		//��ü Ž�� ����
//		for (int w = 0; w < n; w++)
//		{
//			for (int h = 0; h < m; h++)
//			{
//				//Ž�� Ƚ���� ���̱� ���� ���� �߰�
//				if (arr[w][h] == 1 && false == visited[w][h])
//				{
//					result++;
//					BFS(w, h);
//				}
//			}
//		}
//
//		//�׽�Ʈ ���̽��� ���� �����ϱ� ���� �迭�� ��п��θ� �ʱ�ȭ
//		arr = vector<vector<int>>(51, vector<int>(51, 0));
//		visited = vector<vector<bool>>(51, vector<bool>(51, false));
//		cout << result << endl;
//		result = 0;
//	}
//}