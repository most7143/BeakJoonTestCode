#include<iostream>
#include<queue>
#include<vector>

using namespace std;

//���� ���� - ��� �迭�� ��ȸ���� �ʱ� ������ �ִ� ���̷� ����
int boxes[1001][1001];

//�����¿� Ž������
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int m, n;

queue<pair<int, int>> tomatos;

void BFS()
{
	while (false == tomatos.empty())
	{
		int a = tomatos.front().first;
		int b = tomatos.front().second;

		tomatos.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = a + dx[i];
			int ny = b + dy[i];

			//�迭 ������ ����� �����鼭, ���� �������� �丶�� �� �ִ��� ����
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && boxes[nx][ny] == 0)
			{
				//���� ���� �;����� �ش� �迭�� �Է�
				boxes[nx][ny] = boxes[a][b] + 1;
				tomatos.push({ nx,ny });
			}
		}
	}
}

int main()
{
	cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> boxes[i][j];
			//���� �丶�並 quque�� �ִ´�. �������� �������� �� �ֱ� ������
			if (boxes[i][j] == 1)
			{
				tomatos.push({ i,j });
			}
		}
	}

	BFS();

	//��� ���ϴ� ��.
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (boxes[i][j] == 0)
			{
				cout << "-1";
				return 0;
			}

			//��ȸ�ϸ鼭 ���� �ϼ��� ���� �丶�並 �����´�.
			if (max < boxes[i][j])
			{
				max = boxes[i][j];
			}
		}
	}

	//0�� �ƴ� 1���� �����߱� ������ -1 ���ش�.
	cout << max - 1;

	return 0;
}

//�ð�ȭ��

//void printBoxes() {
//	cout << "���� ����:\n";
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << boxes[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	cout << "----------------------\n";
//}
//
//void BFS()
//{
//	while (!tomatos.empty())
//	{
//		int a = tomatos.front().first;
//		int b = tomatos.front().second;
//
//		tomatos.pop();
//
//		cout << "ó�� ���� �丶�� ��ġ: (" << a << ", " << b << ")\n";
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = a + dx[i];
//			int ny = b + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m && boxes[nx][ny] == 0)
//			{
//				boxes[nx][ny] = boxes[a][b] + 1;
//				tomatos.push({ nx,ny });
//
//				cout << "�� ����: (" << nx << ", " << ny << ") = " << boxes[nx][ny] << "����\n";
//			}
//		}
//		printBoxes();
//	}
//}
//
//int main()
//{
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> boxes[i][j];
//			if (boxes[i][j] == 1)
//			{
//				tomatos.push({ i,j });
//			}
//		}
//	}
//
//	BFS();
//
//	int max = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (boxes[i][j] == 0)
//			{
//				cout << "-1";
//				return 0;
//			}
//
//			if (max < boxes[i][j])
//			{
//				max = boxes[i][j];
//			}
//		}
//	}
//
//	cout << "�� �ҿ���: " << max - 1 << "\n";
//
//	return 0;
//}