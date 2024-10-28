//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
////first:����� ��ȣ, second :�Ÿ� �� ��Ƶ� �� �ְ� Edge Ÿ�� ���Ǹ� �Ѵ�
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
//	//ù��° BFS���� ������(1)���κ��� ���� ���� �ָ��ִ� ��带 ����
//	for (int i = 2; i <= N; i++)
//	{
//		if (Distance[max] < Distance[i])
//		{
//			max = i;
//		}
//	}
//
//	//������ ��带 �������� ���� �ָ� �ִ� ��带 �ٽ� ���Ѵ�
//	//ó�� �������� ��ġ�� ������ ���� �� ��ġ�� �ƴ� ���� �ֱ� ������ �� �� �� ���
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