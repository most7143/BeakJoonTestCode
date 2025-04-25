//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////����� �̵� �迭
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////ó�� �ʰ�, ���� ������ ���� ����
//int map[8][8];
//int temp[8][8];
//
//int m, n;
//
//int result;
//
////���� ī���ϴ� �Լ�
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
//	// ���̼����� ���¿��� ���̷����� ��Ʈ�� �迭
//	int spread[8][8];
//
//	//�� ��ġ ����
//	MapCopy(spread, temp);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (spread[i][j] == 2)
//			{
//				// ���̷��� ��ġ�� queue�� ��� ( �迭�� �ִ� ��� ���̷����� ���ÿ� ��Ʈ�����ϱ� ����)
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
//	//���� ���� ���� ����
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
//	//�������� ������ ���� ����
//	result = max(result, cnt);
//}
//
////���� ����� �Լ�
//void Wall(int wallcnt)
//{
//	//���� 3���� ���������� BFS����
//	if (wallcnt == 3)
//	{
//		BFS();
//		return;
//	}
//	else
//	{
//		//����Լ� ����, ���� �迭�� ������ ������ �� ���� ���ȣ��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (temp[i][j] == 0)
//				{
//					temp[i][j] = 1; // ���� �����
//					Wall(wallcnt + 1); // ���ο� �� ���� , �ش���ġ�� ���� �����Ǿ����� �ڵ������� ���� ���� ���� ��ġ�Ǿ� ������
//					temp[i][j] = 0; // ��Ʈ��ŷ�� �Ǵ� �κ� . ������ �����Ǿ��� ���� ������
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
//	MapCopy(temp, map);  // ������ �� �� �� ����
//	Wall(0);             // �� ��ġ 0������ ����
//
//	cout << result;
//}