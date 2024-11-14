#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> A;
vector<int> Answer;
vector<bool> Visited;

void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node);
	Visited[node] = true;

	while (false == myQueue.empty())
	{
		int now = myQueue.front();
		myQueue.pop();

		for (int i : A[now])
		{
			if (false == Visited[i])
			{
				Visited[i] = true;
				Answer[i]++;
				myQueue.push(i);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	A.resize(n + 1);
	Visited.resize(n + 1);
	Answer.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
	}

	for (int i = 0; i <= n; i++)
	{
		fill(Visited.begin(), Visited.end(), false);
		BFS(i);
	}

	int maxVal = 0;

	for (int i = 0; i <= n; i++)
	{
		maxVal = max(maxVal, Answer[i]);
	}

	for (int i = 0; i <= n; i++)
	{
		if (Answer[i] == maxVal)
		{
			cout << i << " ";
		}
	}
}