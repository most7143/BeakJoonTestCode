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

		for (int i = 1; i <= n; i++) // 컴퓨터는 1번 부터 n번까지 검사
		{
			if (arr[now][i] == 1 && Visited[i] == false) // 서로 연결되어 있으면서 , 아직 방문하지 않았는지 체크
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

		//두번 씩 값을 넣어줘야 서로 연결되었다고 인지함
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	BFS(1);

	cout << cnt;
}