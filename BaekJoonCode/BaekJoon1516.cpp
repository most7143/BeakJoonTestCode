#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	vector<vector<int>> A; // 인접 리스트 (각 노드가 의존하는 노드를 저장)
	vector<int> Indegree; // 각 노드의 진입 차수
	vector<int> SelfBuild; // 각 건물을 짓는 데 걸리는 시간
	vector<int> Result; // 각 건물의 완공 시간을 저장

	cin >> N;

	A.resize(N + 1);
	Indegree.resize(N + 1);
	SelfBuild.resize(N + 1);
	Result.resize(N + 1);

	// 건물에 대한 정보 입력
	for (int i = 1; i <= N; i++)
	{
		cin >> SelfBuild[i]; // 각 건물의 건설에 걸리는 시간 입력
		while (true)
		{
			int temp;
			cin >> temp;

			if (temp != -1) // -1이 아닌 값은 의존하는 건물
			{
				A[temp].push_back(i); // 건물 i가 건물 temp에 의존한다는 정보 추가
				Indegree[i]++; // 건물 i로 들어오는 간선(의존 관계)이 하나 증가
			}
			else
			{
				break;
			}
		}
	}

	queue<int> MyQueue; // 위상 정렬을 위한 큐

	// 위상 정렬을 시작하려면 진입 차수가 0인 노드를 큐에 넣는다.
	for (int i = 1; i <= N; i++)
	{
		if (Indegree[i] == 0) // 진입 차수가 0인 노드는 아직 어떤 건물도 의존하지 않음
		{
			MyQueue.push(i); // 위상 정렬의 시작점으로 큐에 넣는다.
		}
	}

	// 큐가 비어있지 않으면 계속 진행
	while (false == MyQueue.empty())
	{
		int now = MyQueue.front(); // 큐에서 노드 하나를 꺼낸다.
		MyQueue.pop();

		// 현재 노드의 모든 후속 노드들에 대해 처리
		for (int next : A[now]) // 현재 노드에 의존하는 모든 후속 노드
		{
			Indegree[next]--; // 현재 노드를 처리했으므로, 후속 노드의 진입 차수를 하나 감소
			// 후속 노드의 완공 시간을 갱신 (이전 건물이 완공된 시간 + 현재 건물을 짓는 시간)
			Result[next] = max(Result[next], Result[now] + SelfBuild[now]);

			// 후속 노드의 진입 차수가 0이면, 이제 그 노드를 처리할 수 있다.
			if (Indegree[next] == 0)
			{
				MyQueue.push(next); // 진입 차수가 0이 된 후속 노드를 큐에 추가
			}
		}
	}

	// 각 건물의 완공 시간을 출력
	for (int i = 1; i <= N; i++)
	{
		cout << Result[i] + SelfBuild[i] << "\n";
	}
}