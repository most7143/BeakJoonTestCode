//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//vector<pair<int, int>> Tree[10001]; //���� �迭 ����
//bool Visited[10001];
//int N, MaxDist, FarNode = 0; //����, �ִ����, ����ճ�Ʈ
//
//void DFS(int node, int dist)
//{
//	Visited[node] = true;
//
//	//�ִ� ���̰� ������ �ȴٸ� , ���̿� ��带 �缳��
//	if (MaxDist < dist)
//	{
//		MaxDist = dist;
//		FarNode = node;
//	}
//
//	//Ʈ���迭�� ���� Ž��
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
//		//����� ����
//		Tree[parent].push_back(make_pair(child, weight));
//		Tree[child].push_back(make_pair(parent, weight));
//	}
//
//	//�湮�� �ʱ�ȭ �ϰ� 1���������� ���� ���� �� ��带 Ž��
//	memset(Visited, false, sizeof(Visited));
//	DFS(1, 0);
//
//	//�湮 ���� �ʱ�ȭ�ϰ� FarNode���� ���� ���� �� ��带 Ž��
//	memset(Visited, false, sizeof(Visited));
//	MaxDist = 0;
//	DFS(FarNode, 0);
//
//	cout << MaxDist;
//}