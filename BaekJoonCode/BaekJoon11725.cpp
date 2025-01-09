//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//vector<int> answer;
//vector<bool> visited;
//vector<vector<int>> tree;
//
//void DFS(int number) {
//	visited[number] = true;
//
//	// ���� ���� ����� ��� ��忡 ���� Ž��
//	for (int i : tree[number]) {
//		if (false == visited[i]) {   // ���� �湮���� ���� �����
//			answer[i] = number;      // �ش� ����� �θ� ���� ���� ����
//			DFS(i);                   // �ش� ��带 DFS�� Ž��
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//	visited.resize(N + 1);
//	answer.resize(N + 1);
//	tree.resize(N + 1);
//
//	// Ʈ�� ���� �Է� �ޱ�
//	for (int i = 1; i < N; i++) {
//		int n1, n2;
//		cin >> n1 >> n2;
//		tree[n1].push_back(n2);     // n1�� n2�� ���� ����ǹǷ� ��������� ����
//		tree[n2].push_back(n1);     // n2�� n1�� ���� ����ǹǷ� ��������� ����
//	}
//
//	DFS(1);
//
//	// �� ����� �θ� ���
//	for (int i = 2; i <= N; i++) {
//		cout << answer[i] << "\n";
//	}
//
//	return 0;
//}