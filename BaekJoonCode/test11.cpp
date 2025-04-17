#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

int n;
int checkAnswer = 0;
vector<int> Visited;

bool IsTry(int qcnt)
{
	for (int i = 0; i < qcnt; i++)
	{
		if (Visited[qcnt] == Visited[i] || qcnt - i == abs(Visited[qcnt] - Visited[i]))
		{
			return false;
		}
	}

	return true;
}

void chess_puzzle(int qcnt) {
	if (checkAnswer)
	{
		return;
	}

	if (qcnt == n)
	{
		checkAnswer = true;

		for (int i = 0; i < Visited.size(); i++)
		{
			if (Visited[i] != -1)
			{
				cout << i << " " << Visited[i] << endl;
			}
		}

		return;
	}

	for (int i = 0; i < n; i++)
	{
		Visited[qcnt] = i;

		if (IsTry(qcnt))
		{
			chess_puzzle(qcnt + 1);
		}
	}
}

int main()
{
	n = 4;

	Visited.resize(n, -1);

	chess_puzzle(0);

	return 0;
}