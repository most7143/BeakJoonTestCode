//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> tree;
//vector<bool> visited;
//
//int N;
//int answer = 0;
//int deleteNode = 0;
//
//// DFS �Լ�: �־��� ������ ���� �켱 Ž���� �����ϰ�, ���� ��带 ã�´�.
//void DFS(int number)
//{
//	visited[number] = true;
//
//	int cNode = 0;  // ���� ��忡�� �ڽ� ����� ���� �� ����
//
//	for (int i : tree[number])
//	{
//		// �ڽ� ��尡 �湮���� �ʾҰ�, ������ ��尡 �ƴ϶��
//		if (false == visited[i] && i != deleteNode)
//		{
//			cNode++;  // �ڽ� ��� ���� ����
//			DFS(i);   // �ڽ� ���� ���� �켱 Ž��
//		}
//	}
//
//	// �ڽ� ��尡 ���ٸ�, �� ���� �����.
//	if (cNode == 0)
//	{
//		answer++;
//	}
//}
//
//int main()
//{
//	cin >> N;
//
//	tree.resize(N);
//	visited.resize(N);
//
//	int root = 0;  // ��Ʈ ��带 ������ ����
//
//	// Ʈ���� �θ�-�ڽ� ���踦 �Է¹ް� Ʈ�� ������ ����
//	for (int i = 0; i < N; i++)
//	{
//		int p;
//		cin >> p;  // �θ� ��� �Է�
//
//		if (p != -1)  // �θ� ��尡 -1�� �ƴϸ�
//		{
//			tree[i].push_back(p);  // i�� ���� p�� ��尡 ����ȴٰ� ����
//			tree[p].push_back(i);  // p�� ���� i�� ��嵵 ����ȴٰ� ���� (����� ����)
//		}
//		else  // �θ� ��尡 -1�̸�, �ش� ���� ��Ʈ ���
//		{
//			root = i;  // ��Ʈ ��带 ���
//		}
//	}
//
//	cin >> deleteNode;
//
//	// ������ ��尡 ��Ʈ �����, ���� ��尡 �����Ƿ� �ٷ� 0 ���
//	if (deleteNode == root)
//	{
//		cout << "0";
//	}
//	else
//	{
//		DFS(root);  // ��Ʈ ������ DFS ����
//
//		cout << answer;
//	}
//}