//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int N, M; // N: 트리의 노드 수, M: LCA를 구할 쿼리의 수
//
//// 트리의 연결을 나타내는 벡터, 각 노드의 깊이와 부모를 저장할 벡터, 방문 여부를 저장하는 벡터
//vector<vector<int>> tree;
//vector<int> depth;
//vector<int> parents;
//vector<bool> visited;
//
//// 두 노드 a, b의 LCA를 찾는 함수
//int ExecuteLCA(int a, int b)
//{
//	// 깊이가 더 작은 노드를 더 깊은 노드로 맞추기
//	if (depth[a] < depth[b])
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	// 깊이를 맞추기 위해 더 깊은 노드를 부모로 이동시키기
//	while (depth[a] != depth[b])
//	{
//		a = parents[a];
//	}
//
//	// 이제 두 노드의 깊이가 같으므로, 부모를 따라가며 공통 조상이 나올 때까지 이동
//	while (a != b)
//	{
//		a = parents[a];
//		b = parents[b];
//	}
//
//	return b; // a와 b가 같으면 그 노드가 LCA
//}
//
//// BFS로 트리를 탐색하며 각 노드의 부모와 깊이를 설정하는 함수
//void BFS(int node)
//{
//	queue<int> myQueue; // BFS 탐색을 위한 큐
//
//	myQueue.push(node); // 시작 노드를 큐에 삽입
//	visited[node] = true; // 시작 노드는 방문 처리
//	int level = 1; // 시작 노드의 깊이는 0
//	int nowSize = 1; // 현재 레벨의 노드 수
//	int count = 0; // 현재 레벨에서 탐색한 노드 수
//
//	while (!myQueue.empty())
//	{
//		int nowNode = myQueue.front(); // 큐에서 노드를 꺼냄
//		myQueue.pop();
//
//		// 현재 노드의 자식 노드를 모두 큐에 삽입
//		for (int next : tree[nowNode])
//		{
//			if (!visited[next]) // 아직 방문하지 않은 자식 노드
//			{
//				visited[next] = true; // 방문 처리
//				myQueue.push(next); // 큐에 삽입
//				parents[next] = nowNode; // 부모 노드를 설정
//				depth[next] = level; // 자식 노드의 깊이를 설정
//			}
//		}
//
//		count++; // 현재 레벨에서 탐색한 노드 수 증가
//		if (count == nowSize) // 현재 레벨의 모든 노드를 탐색했으면
//		{
//			count = 0;
//			nowSize = myQueue.size(); // 다음 레벨의 노드 수로 갱신
//			level++; // 깊이를 증가시킴
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
//	tree.resize(N + 1); // 트리 초기화 (1-based index 사용)
//	depth.resize(N + 1); // 깊이 배열 초기화
//	parents.resize(N + 1); // 부모 배열 초기화
//	visited.resize(N + 1); // 방문 배열 초기화
//
//	// 트리의 간선 정보 입력 (양방향 간선)
//	for (int i = 0; i < N - 1; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//
//		tree[s].push_back(e); // s -> e 간선 추가
//		tree[e].push_back(s); // e -> s 간선 추가
//	}
//
//	// BFS로 트리 탐색을 시작
//	BFS(1); // 루트 노드는 1번이라고 가정하고 BFS 탐색
//
//	cin >> M;
//
//	// 각 쿼리에 대해 LCA를 구하여 출력
//	for (int i = 0; i < M; i++)
//	{
//		int a, b;
//		cin >> a >> b; // LCA를 구할 두 노드 a, b 입력
//		int LCA = ExecuteLCA(a, b); // 두 노드의 LCA 계산
//		cout << LCA << "\n";
//	}
//
//	return 0;
//}