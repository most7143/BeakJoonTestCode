#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int N, M;  // N: ����� ����, M: ������ ����
vector<vector<int>> tree;  // Ʈ���� ������ ��Ÿ���� ���� ����Ʈ
vector<int> depth;  // �� ����� ���̸� �����ϴ� �迭
int kmax;  // Ʈ���� �ִ� ���̸� ���ϱ� ���� ���� (�ִ� �θ� 2^k���� ���� �� �ֵ���)
int parent[21][100001];  // parent[k][i]: i ����� 2^k ��° �θ� (k�� �ִ� 21�� �̵� �� , i�� �ִ� 100000������ ��带 ����
vector<bool> visited;  // ��带 �湮�ߴ��� üũ�ϴ� �迭

// �� ��� a�� b�� �ּ� ���� ����(LCA)�� ���ϴ� �Լ�
int ExecuteLCA(int a, int b)
{
	//���̰� �� ���� ��带 a�� ���̰� ū ��带 b�� ����
	if (depth[a] > depth[b])
	{
		int temp = a;
		a = b;
		b = temp;
	}

	// b�� ���̸� a�� ���߱� ���� �θ� �Ž��� �ö�
	for (int k = kmax; k >= 0; k--)
	{
		if (pow(2, k) <= depth[b] - depth[a])  // 2^k��ŭ �ö󰡴� ��
		{
			if (depth[a] <= depth[parent[k][b]])  // a�� ���̿� ���ذ��� �ö󰡱�
			{
				b = parent[k][b];  // b�� 2^k��ŭ �ø�
			}
		}
	}

	// ���� a�� b�� ���̰� ����. �� ��带 ���ÿ� �ö󰡸� �θ� ã��
	for (int k = kmax; k >= 0; k--)
	{
		if (parent[k][a] != parent[k][b])  // �θ� �ٸ��� 2^k�� �ö�
		{
			a = parent[k][a];
			b = parent[k][b];
		}
	}

	// a�� b�� �����ϸ� LCA�� a, �ƴϸ� �θ� LCA
	int LCA = a;

	if (a != b)
	{
		LCA = parent[0][LCA];  // �� �ܰ� �� �ö󰡼� LCA�� ã��
	}

	return LCA;
}

// BFS�� ����� Ʈ���� ���̿� �θ� ����ϴ� �Լ�
void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node);
	visited[node] = true;

	int level = 1;  // �ʱ� ������ 1
	int nowSize = 1;  // ���� ������ ��� ��
	int count = 0;  // ������ ��� �湮 ī��Ʈ

	while (false == myQueue.empty())
	{
		int nowNode = myQueue.front();  // ť���� �ϳ��� ��带 ����
		myQueue.pop();

		// ������ ������ ť�� �ְ�, �湮 ó��
		for (int next : tree[nowNode])
		{
			if (false == visited[next])
			{
				visited[next] = true;
				myQueue.push(next);
				parent[0][next] = nowNode;  // �θ� ����
				depth[next] = level;  // ���� ����
			}
		}

		count++;

		if (count == nowSize)  // ���� ������ ��� ��带 ó���� ���
		{
			count = 0;
			nowSize = myQueue.size();  // ���� ������ ��� ��
			level++;  // ���� ����
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;  // ����� ���� �Է�
	tree.resize(N + 1);  // Ʈ���� ũ�� ���� (1-based index)
	depth.resize(N + 1);  // ���� �迭 �ʱ�ȭ
	visited.resize(N + 1);  // �湮 �迭 �ʱ�ȭ

	// Ʈ���� ���� ���� �Է�
	for (int i = 0; i < N - 1; i++)
	{
		int s, e;
		cin >> s >> e;
		tree[s].push_back(e);  // ����� �׷���
		tree[e].push_back(s);
	}

	// �ִ� ���̸� ���ϱ� ���� kmax ����
	int temp = 1;
	kmax = 0;
	while (temp <= N)
	{
		temp <<= 1;  // 2�� �ŵ����� ���·� ����
		kmax++;
	}

	// BFS�� ���� Ʈ���� ���̿� �θ� ����
	BFS(1);

	// 2^k ��° �θ� �̸� ���ص� (2^k ũ���� ������ ����)
	for (int k = 1; k <= kmax; k++)
	{
		for (int n = 1; n <= N; n++)
		{
			parent[k][n] = parent[k - 1][parent[k - 1][n]];  // 2^k ��° �θ� ����
		}
	}

	cin >> M;  // ������ ���� �Է�

	// �� ������ ���� LCA�� ���ϰ� ���
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		int LCA = ExecuteLCA(a, b);  // LCA ���ϱ�
		cout << LCA << "\n";  // LCA ���
	}
}