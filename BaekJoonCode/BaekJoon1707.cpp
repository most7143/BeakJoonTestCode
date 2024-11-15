#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> A;
static vector<int> Check;
static vector<bool> Visited;
static bool IsEven;

void DFS(int node)
{
	Visited[node] = true;

	for (int i : A[node])
	{
		if (false == Visited[i])
		{
			Check[i] = (Check[node] + 1) % 2;
			DFS(i);
		}
		else if (Check[node] == Check[i])
		{
			IsEven = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int v, e;
		cin >> v >> e;
		A.resize(v + 1);
		Check.resize(v + 1);
		Visited.resize(v + 1);
		IsEven = true;

		for (int j = 0; j < e; j++)
		{
			int s, e;
			cin >> s >> e;
			A[s].push_back(e);
			A[e].push_back(s);
		}

		for (int j = 1; j <= v; j++)
		{
			if (IsEven)
			{
				DFS(j);
			}
			else
			{
				break;
			}
		}

		if (IsEven)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}

		A.clear();
		Visited.clear();
		Check.clear();
	}
}