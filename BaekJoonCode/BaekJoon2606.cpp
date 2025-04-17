#include <iostream>
#include <queue>

using namespace std;

int n, m;
int arr[101][101];
bool Visited[101];
int cnt = 0;

void BFS(int v)
{
	queue<int> q;

	q.push(v);
	Visited[v] = true;

	while (false == q.empty())
	{
		int now = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) // ��ǻ�ʹ� 1�� ���� n������ �˻�
		{
			if (arr[now][i] == 1 && Visited[i] == false) // ���� ����Ǿ� �����鼭 , ���� �湮���� �ʾҴ��� üũ
			{
				cnt++;
				Visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;

		//�ι� �� ���� �־���� ���� ����Ǿ��ٰ� ������
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	BFS(1);

	cout << cnt;
}