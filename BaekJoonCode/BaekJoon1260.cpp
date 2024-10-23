//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//static vector<vector<int>> A;
//
//static vector<bool> Visited;
//static bool arrive;
//void DFS(int node);
//void BFS(int node);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M, start;
//	cin >> N >> M >> start;
//
//	A.resize(N + 1);
//	Visited = vector<bool>(N + 1, false);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, e;
//
//		cin >> s >> e;
//
//		A[s].push_back(e);
//		A[e].push_back(s);
//	}
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		sort(A[i].begin(), A[i].end());
//	}
//
//	DFS(start);
//
//	cout << "\n";
//
//	fill(Visited.begin(), Visited.end(), false);
//
//	BFS(start);
//}
//
//void DFS(int node)
//{
//	cout << node << " ";
//
//	Visited[node] = true;
//
//	for (int i : A[node])
//	{
//		if (!Visited[i])
//		{
//			DFS(i);
//		}
//	}
//}
//
//void BFS(int node)
//{
//	queue<int> myQueue;
//
//	myQueue.push(node);
//
//	Visited[node] = true;
//
//	while (!myQueue.empty())
//	{
//		int now = myQueue.front();
//
//		myQueue.pop();
//
//		cout << now << " ";
//
//		for (int i : A[now])
//		{
//			if (!Visited[i])
//			{
//				Visited[i] = true;
//				myQueue.push(i);
//			}
//		}
//	}
//}