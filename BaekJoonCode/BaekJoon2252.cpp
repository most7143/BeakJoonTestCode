#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//���� ������ �̿��� ���� �ذ�

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> A;

	//���� ���� �迭
	vector<int> indegree;

	int N, M;

	cin >> N >> M;

	A.resize(N + 1);
	indegree.resize(N + 1);

	//S�� E�� ����Ű�� ������ E��° ���� ���� �迭�� ���� ���������ش�.
	for (int i = 0; i < M; i++)
	{
		int S, E;

		cin >> S >> E;

		A[S].push_back(E);
		indegree[E]++;
	}

	queue<int> myQueue;

	//���� �����迭�� ���� 0�� �͵��� ���� ť�� ��´�.
	for (int i = 1; i <= N; i++)
	{
		if (indegree[i] == 0)
		{
			myQueue.push(i);
		}
	}

	while (!myQueue.empty())
	{
		int now = myQueue.front();

		myQueue.pop();

		cout << now << " ";

		//���������� ���� �Լ� ���ָ�, 0�� �ž��� �� ť�� �ٽ� ��´�.
		for (int next : A[now])
		{
			indegree[next]--;

			if (indegree[next] == 0)
			{
				myQueue.push(next);
			}
		}
	}
}