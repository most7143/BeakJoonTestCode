//#include <iostream>
//#include <vector>
//using namespace std;
//
//static vector<vector<int>> A;
//static vector<bool> Visited;
//static bool arrive;
//void DFS(int now, int deep);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//
//	cin >> N >> M;
//
//	A.resize(N);
//	Visited = vector<bool>(N, false);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//		A[s].push_back(e);
//		A[e].push_back(s);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		DFS(i, 1);
//		if (arrive)
//		{
//			break;
//		}
//	}
//
//	if (arrive)
//	{
//		cout << "1";
//	}
//	else
//	{
//		cout << "0";
//	}
//}
//
//void DFS(int now, int deep)
//{
//	if (deep == 5)
//	{
//		arrive = true;
//		return;
//	}
//
//	Visited[now] = true;
//
//	for (int i : A[now])
//	{
//		if (!Visited[i])
//		{
//			DFS(i, deep + 1);
//		}
//	}
//
//	Visited[now] = false;
//}