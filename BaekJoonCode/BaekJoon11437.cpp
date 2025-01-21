//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int N, M; // N: Ʈ���� ��� ��, M: LCA�� ���� ������ ��
//
//// Ʈ���� ������ ��Ÿ���� ����, �� ����� ���̿� �θ� ������ ����, �湮 ���θ� �����ϴ� ����
//vector<vector<int>> tree;
//vector<int> depth;
//vector<int> parents;
//vector<bool> visited;
//
//// �� ��� a, b�� LCA�� ã�� �Լ�
//int ExecuteLCA(int a, int b)
//{
//	// ���̰� �� ���� ��带 �� ���� ���� ���߱�
//	if (depth[a] < depth[b])
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	// ���̸� ���߱� ���� �� ���� ��带 �θ�� �̵���Ű��
//	while (depth[a] != depth[b])
//	{
//		a = parents[a];
//	}
//
//	// ���� �� ����� ���̰� �����Ƿ�, �θ� ���󰡸� ���� ������ ���� ������ �̵�
//	while (a != b)
//	{
//		a = parents[a];
//		b = parents[b];
//	}
//
//	return b; // a�� b�� ������ �� ��尡 LCA
//}
//
//// BFS�� Ʈ���� Ž���ϸ� �� ����� �θ�� ���̸� �����ϴ� �Լ�
//void BFS(int node)
//{
//	queue<int> myQueue; // BFS Ž���� ���� ť
//
//	myQueue.push(node); // ���� ��带 ť�� ����
//	visited[node] = true; // ���� ���� �湮 ó��
//	int level = 1; // ���� ����� ���̴� 0
//	int nowSize = 1; // ���� ������ ��� ��
//	int count = 0; // ���� �������� Ž���� ��� ��
//
//	while (!myQueue.empty())
//	{
//		int nowNode = myQueue.front(); // ť���� ��带 ����
//		myQueue.pop();
//
//		// ���� ����� �ڽ� ��带 ��� ť�� ����
//		for (int next : tree[nowNode])
//		{
//			if (!visited[next]) // ���� �湮���� ���� �ڽ� ���
//			{
//				visited[next] = true; // �湮 ó��
//				myQueue.push(next); // ť�� ����
//				parents[next] = nowNode; // �θ� ��带 ����
//				depth[next] = level; // �ڽ� ����� ���̸� ����
//			}
//		}
//
//		count++; // ���� �������� Ž���� ��� �� ����
//		if (count == nowSize) // ���� ������ ��� ��带 Ž��������
//		{
//			count = 0;
//			nowSize = myQueue.size(); // ���� ������ ��� ���� ����
//			level++; // ���̸� ������Ŵ
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	tree.resize(N + 1); // Ʈ�� �ʱ�ȭ (1-based index ���)
//	depth.resize(N + 1); // ���� �迭 �ʱ�ȭ
//	parents.resize(N + 1); // �θ� �迭 �ʱ�ȭ
//	visited.resize(N + 1); // �湮 �迭 �ʱ�ȭ
//
//	// Ʈ���� ���� ���� �Է� (����� ����)
//	for (int i = 0; i < N - 1; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//
//		tree[s].push_back(e); // s -> e ���� �߰�
//		tree[e].push_back(s); // e -> s ���� �߰�
//	}
//
//	// BFS�� Ʈ�� Ž���� ����
//	BFS(1); // ��Ʈ ���� 1���̶�� �����ϰ� BFS Ž��
//
//	cin >> M;
//
//	// �� ������ ���� LCA�� ���Ͽ� ���
//	for (int i = 0; i < M; i++)
//	{
//		int a, b;
//		cin >> a >> b; // LCA�� ���� �� ��� a, b �Է�
//		int LCA = ExecuteLCA(a, b); // �� ����� LCA ���
//		cout << LCA << "\n";
//	}
//
//	return 0;
//}