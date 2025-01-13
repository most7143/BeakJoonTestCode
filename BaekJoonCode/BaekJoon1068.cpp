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
//// DFS 함수: 주어진 노드부터 깊이 우선 탐색을 시작하고, 리프 노드를 찾는다.
//void DFS(int number)
//{
//	visited[number] = true;
//
//	int cNode = 0;  // 현재 노드에서 자식 노드의 수를 셀 변수
//
//	for (int i : tree[number])
//	{
//		// 자식 노드가 방문되지 않았고, 삭제할 노드가 아니라면
//		if (false == visited[i] && i != deleteNode)
//		{
//			cNode++;  // 자식 노드 개수 증가
//			DFS(i);   // 자식 노드로 깊이 우선 탐색
//		}
//	}
//
//	// 자식 노드가 없다면, 즉 리프 노드임.
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
//	int root = 0;  // 루트 노드를 저장할 변수
//
//	// 트리의 부모-자식 관계를 입력받고 트리 구조를 구성
//	for (int i = 0; i < N; i++)
//	{
//		int p;
//		cin >> p;  // 부모 노드 입력
//
//		if (p != -1)  // 부모 노드가 -1이 아니면
//		{
//			tree[i].push_back(p);  // i번 노드와 p번 노드가 연결된다고 설정
//			tree[p].push_back(i);  // p번 노드와 i번 노드도 연결된다고 설정 (양방향 연결)
//		}
//		else  // 부모 노드가 -1이면, 해당 노드는 루트 노드
//		{
//			root = i;  // 루트 노드를 기록
//		}
//	}
//
//	cin >> deleteNode;
//
//	// 삭제할 노드가 루트 노드라면, 리프 노드가 없으므로 바로 0 출력
//	if (deleteNode == root)
//	{
//		cout << "0";
//	}
//	else
//	{
//		DFS(root);  // 루트 노드부터 DFS 시작
//
//		cout << answer;
//	}
//}