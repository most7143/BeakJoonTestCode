#include <iostream>

using namespace std;

char Board[21][21];
bool Visited[26];

int Dx[4] = { -1,1,0,0 };
int Dy[4] = { 0,0,-1,1 };

int MaxCnt = 0;
int R, C;

void DFS(int x, int y, int count)
{
	MaxCnt = max(MaxCnt, count);

	for (int i = 0; i < 4; i++)
	{
		int nx = x + Dx[i];
		int ny = y + Dy[i];

		if (nx >= 0 && nx < R && ny >= 0 && ny < C)
		{
			int target = Board[nx][ny] - 'A';

			if (!Visited[target])
			{
				Visited[target] = true;
				DFS(nx, ny, count + 1);
				Visited[target] = false;
			}
		}
	}
}

int main()
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		string s;

		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			Board[i][j] = s[j];
		}
	}
	Visited[Board[0][0] - 'A'] = true;
	DFS(0, 0, 1);
	cout << MaxCnt;
}