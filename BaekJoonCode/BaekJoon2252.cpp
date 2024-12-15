#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//위상 정렬을 이용한 문제 해결

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> A;

	//진입 차수 배열
	vector<int> indegree;

	int N, M;

	cin >> N >> M;

	A.resize(N + 1);
	indegree.resize(N + 1);

	//S가 E를 가르키고 있을때 E번째 진입 차수 배열에 값을 증가시켜준다.
	for (int i = 0; i < M; i++)
	{
		int S, E;

		cin >> S >> E;

		A[S].push_back(E);
		indegree[E]++;
	}

	queue<int> myQueue;

	//진입 차수배열의 값이 0인 것들은 전부 큐에 담는다.
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

		//진입차수의 값을 게속 빼주며, 0이 돼었을 때 큐에 다시 담는다.
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