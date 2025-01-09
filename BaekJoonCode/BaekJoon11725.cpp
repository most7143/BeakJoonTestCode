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
//	// 현재 노드와 연결된 모든 노드에 대해 탐색
//	for (int i : tree[number]) {
//		if (false == visited[i]) {   // 아직 방문하지 않은 노드라면
//			answer[i] = number;      // 해당 노드의 부모를 현재 노드로 설정
//			DFS(i);                   // 해당 노드를 DFS로 탐색
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
//	// 트리 구조 입력 받기
//	for (int i = 1; i < N; i++) {
//		int n1, n2;
//		cin >> n1 >> n2;
//		tree[n1].push_back(n2);     // n1과 n2는 서로 연결되므로 양방향으로 저장
//		tree[n2].push_back(n1);     // n2와 n1도 서로 연결되므로 양방향으로 저장
//	}
//
//	DFS(1);
//
//	// 각 노드의 부모를 출력
//	for (int i = 2; i <= N; i++) {
//		cout << answer[i] << "\n";
//	}
//
//	return 0;
//}