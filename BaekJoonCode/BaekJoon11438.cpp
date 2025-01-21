#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int N, M;  // N: 노드의 개수, M: 쿼리의 개수
vector<vector<int>> tree;  // 트리의 구조를 나타내는 인접 리스트
vector<int> depth;  // 각 노드의 깊이를 저장하는 배열
int kmax;  // 트리의 최대 깊이를 구하기 위한 변수 (최대 부모를 2^k까지 구할 수 있도록)
int parent[21][100001];  // parent[k][i]: i 노드의 2^k 번째 부모 (k는 최대 21번 이동 수 , i는 최대 100000까지의 노드를 담음
vector<bool> visited;  // 노드를 방문했는지 체크하는 배열

// 두 노드 a와 b의 최소 공통 조상(LCA)을 구하는 함수
int ExecuteLCA(int a, int b)
{
	//깊이가 더 작은 노드를 a로 깊이가 큰 노드를 b로 설정
	if (depth[a] > depth[b])
	{
		int temp = a;
		a = b;
		b = temp;
	}

	// b의 깊이를 a와 맞추기 위해 부모를 거슬러 올라감
	for (int k = kmax; k >= 0; k--)
	{
		if (pow(2, k) <= depth[b] - depth[a])  // 2^k만큼 올라가는 것
		{
			if (depth[a] <= depth[parent[k][b]])  // a의 깊이와 비교해가며 올라가기
			{
				b = parent[k][b];  // b를 2^k만큼 올림
			}
		}
	}

	// 이제 a와 b의 깊이가 같음. 두 노드를 동시에 올라가며 부모를 찾음
	for (int k = kmax; k >= 0; k--)
	{
		if (parent[k][a] != parent[k][b])  // 부모가 다르면 2^k씩 올라감
		{
			a = parent[k][a];
			b = parent[k][b];
		}
	}

	// a와 b가 동일하면 LCA가 a, 아니면 부모가 LCA
	int LCA = a;

	if (a != b)
	{
		LCA = parent[0][LCA];  // 한 단계 더 올라가서 LCA를 찾음
	}

	return LCA;
}

// BFS를 사용해 트리의 깊이와 부모를 계산하는 함수
void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node);
	visited[node] = true;

	int level = 1;  // 초기 레벨은 1
	int nowSize = 1;  // 현재 레벨의 노드 수
	int count = 0;  // 레벨별 노드 방문 카운트

	while (false == myQueue.empty())
	{
		int nowNode = myQueue.front();  // 큐에서 하나의 노드를 꺼냄
		myQueue.pop();

		// 인접한 노드들을 큐에 넣고, 방문 처리
		for (int next : tree[nowNode])
		{
			if (false == visited[next])
			{
				visited[next] = true;
				myQueue.push(next);
				parent[0][next] = nowNode;  // 부모 설정
				depth[next] = level;  // 깊이 설정
			}
		}

		count++;

		if (count == nowSize)  // 현재 레벨의 모든 노드를 처리한 경우
		{
			count = 0;
			nowSize = myQueue.size();  // 다음 레벨의 노드 수
			level++;  // 레벨 증가
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;  // 노드의 개수 입력
	tree.resize(N + 1);  // 트리의 크기 설정 (1-based index)
	depth.resize(N + 1);  // 깊이 배열 초기화
	visited.resize(N + 1);  // 방문 배열 초기화

	// 트리의 간선 정보 입력
	for (int i = 0; i < N - 1; i++)
	{
		int s, e;
		cin >> s >> e;
		tree[s].push_back(e);  // 양방향 그래프
		tree[e].push_back(s);
	}

	// 최대 깊이를 구하기 위한 kmax 설정
	int temp = 1;
	kmax = 0;
	while (temp <= N)
	{
		temp <<= 1;  // 2의 거듭제곱 형태로 증가
		kmax++;
	}

	// BFS를 통해 트리의 깊이와 부모를 설정
	BFS(1);

	// 2^k 번째 부모를 미리 구해둠 (2^k 크기의 점프를 위해)
	for (int k = 1; k <= kmax; k++)
	{
		for (int n = 1; n <= N; n++)
		{
			parent[k][n] = parent[k - 1][parent[k - 1][n]];  // 2^k 번째 부모 설정
		}
	}

	cin >> M;  // 쿼리의 개수 입력

	// 각 쿼리에 대해 LCA를 구하고 출력
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		int LCA = ExecuteLCA(a, b);  // LCA 구하기
		cout << LCA << "\n";  // LCA 출력
	}
}