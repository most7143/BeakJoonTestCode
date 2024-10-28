//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
////first:노드의 번호, second :거리 를 담아둘 수 있게 Edge 타입 정의를 한다
//typedef pair<int, int> Edge;
//
//static vector<vector<Edge>> A;
//static vector<bool> Visited;
//static vector<int> Distance;
//void BFS(int node);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	A.resize(N + 1);
//	Distance = vector<int>(N + 1, 0);
//	Visited = vector<bool>(N + 1, false);
//
//	for (int i = 0; i < N; i++)
//	{
//		int s;
//		cin >> s;
//		while (true)
//		{
//			int e, v;
//			cin >> e;
//			if (e == -1)
//			{
//				break;
//			}
//			cin >> v;
//			A[s].push_back(Edge(e, v));
//		}
//	}
//
//	BFS(1);
//
//	int max = 1;
//
//	//첫번째 BFS에서 기준점(1)으로부터 가장 끝에 멀리있는 노드를 구함
//	for (int i = 2; i <= N; i++)
//	{
//		if (Distance[max] < Distance[i])
//		{
//			max = i;
//		}
//	}
//
//	//구해진 노드를 기준으로 가장 멀리 있는 노드를 다시 구한다
//	//처음 기준점의 위치가 무조건 가장 먼 위치는 아닐 수도 있기 때문에 한 번 더 계산
//	fill(Distance.begin(), Distance.end(), 0);
//	fill(Visited.begin(), Visited.end(), false);
//	BFS(max);
//
//	sort(Distance.begin(), Distance.end());
//
//	cout << Distance[N];
//}
//
//void BFS(int node)
//{
//	queue<int> myQueue;
//	myQueue.push(node);
//	Visited[node] = true;
//
//	while (!myQueue.empty())
//	{
//		int now = myQueue.front();
//		myQueue.pop();
//
//		for (Edge i : A[now])
//		{
//			if (!Visited[i.first])
//			{
//				Visited[i.first] = true;
//				myQueue.push(i.first);
//				Distance[i.first] = Distance[now] + i.second;
//			}
//		}
//	}
//}