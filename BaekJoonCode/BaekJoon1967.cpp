//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//vector<pair<int, int>> Tree[10001]; //전선 배열 선언
//bool Visited[10001];
//int N, MaxDist, FarNode = 0; //갯수, 최대길이, 가장먼노트
//
//void DFS(int node, int dist)
//{
//	Visited[node] = true;
//
//	//최대 길이가 갱신이 된다면 , 길이와 노드를 재설정
//	if (MaxDist < dist)
//	{
//		MaxDist = dist;
//		FarNode = node;
//	}
//
//	//트리배열을 전부 탐색
//	for (auto next : Tree[node])
//	{
//		int nextNode = next.first;
//		int weight = next.second;
//
//		if (!Visited[nextNode])
//		{
//			DFS(nextNode, dist + weight);
//		}
//	}
//}
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		int parent, child, weight;
//		cin >> parent >> child >> weight;
//
//		//양방향 지정
//		Tree[parent].push_back(make_pair(child, weight));
//		Tree[child].push_back(make_pair(parent, weight));
//	}
//
//	//방문값 초기화 하고 1번지점에서 부터 가장 먼 노드를 탐색
//	memset(Visited, false, sizeof(Visited));
//	DFS(1, 0);
//
//	//방문 값을 초기화하고 FarNode에서 부터 가장 먼 노드를 탐색
//	memset(Visited, false, sizeof(Visited));
//	MaxDist = 0;
//	DFS(FarNode, 0);
//
//	cout << MaxDist;
//}