#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

//�����¿� Ž�� ������ ���� �迭
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

string arr[26];

bool Visited[26][26];

vector<int> results;

int n, cnt;

void BFS(int x, int y)
{
	queue<pair<int, int>> q;

	q.push({ x,y });

	Visited[x][y] = true;

	while (false == q.empty())
	{
		int a = q.front().first;
		int b = q.front().second;

		q.pop();

		// ���⺰ Ž�� ����
		for (int i = 0; i < 4; i++)
		{
			int nx = a + dx[i];
			int ny = b + dy[i];

			// 0 Ȥ�� 1����, �ִ� ���̸� ���� �ʴ��� , �湮 �� ���� ������ , ����Ǿ� �ִ���(1) Ȯ��
			if (nx >= 0 && ny >= 0 && nx < n && ny < n && false == Visited[nx][ny] && arr[nx][ny] == '1')
			{
				Visited[nx][ny] = true;
				q.push({ nx,ny });
				cnt++;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// Ž�� �ð��� ���̱� ���� ������ ������ ���� BFS�� �۵��ǵ��� ����
			if (arr[i][j] == '1' && Visited[i][j] == false)
			{
				cnt = 1;
				BFS(i, j);
				results.push_back(cnt);
			}
		}
	}

	sort(results.begin(), results.end());

	cout << results.size() << endl;

	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << endl;
	}
}