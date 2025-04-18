#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

//상하좌우 탐색 순서를 담은 배열
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

		// 방향별 탐색 시작
		for (int i = 0; i < 4; i++)
		{
			int nx = a + dx[i];
			int ny = b + dy[i];

			// 0 혹은 1인지, 최대 길이를 넘지 않는지 , 방문 한 적이 없는지 , 연결되어 있는지(1) 확인
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
			// 탐색 시간을 줄이기 위해 시작이 가능한 곳만 BFS가 작동되도록 설정
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