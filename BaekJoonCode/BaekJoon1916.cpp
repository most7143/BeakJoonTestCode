//#include<iostream>
//#include<vector>
//#include<queue>
//#include<limits.h>
//
//using namespace std;
//
////���� 1916
//
//// edge Ÿ���� ���� (int, int) -> (������, ����ġ)
//typedef pair<int, int> edge;
//
//static int N, M;  // N: ����� ��, M: ����(����)�� ��
//static vector<int> Dist;  // �� �������� �ּ� �Ÿ�
//static vector<bool> Visited;  // �� ����� �湮 ����
//static vector<vector<edge>> Mlist;  // �׷����� ���� ����Ʈ (������, ����ġ)
//
//// ���ͽ�Ʈ�� �˰����� ������ �Լ�
//int Dijkstra(int start, int end)
//{
//	// �׻� ���� �Ÿ��� �켱������ ó���ϱ� ���ؼ� �켱���� ť ���� (pair<int, int> -> �Ÿ�, ���)
//	priority_queue<edge, vector<edge>, greater<edge>> q;
//
//	// ���� ��带 ť�� �ְ�, ���� ����� �Ÿ����� 0���� ����
//	q.push(make_pair(0, start));
//	Dist[start] = 0;
//
//	while (!q.empty())
//	{
//		// ť���� ���� ���� �Ÿ��� ��带 ����
//		edge nowNow = q.top();
//		q.pop();
//
//		int now = nowNow.second;  // ���� ���
//
//		if (!Visited[now])
//		{
//			Visited[now] = true;
//
//			// ���� ���� ����� ��� ���� ��带 Ȯ��
//			for (edge n : Mlist[now])
//			{
//				// n.first�� ������, n.second�� �� ������������ ����ġ
//				// ���� ������������ �Ÿ� ���� �� ���� ���̶�� ����
//				if (Dist[n.first] > Dist[now] + n.second)
//				{
//					Dist[n.first] = Dist[now] + n.second;
//					q.push(make_pair(Dist[n.first], n.first));  // ���ŵ� �Ÿ����� ť�� ����
//				}
//			}
//		}
//	}
//
//	// ���ͽ�Ʈ�� ���� ��, ������������ �ּ� �Ÿ��� ��ȯ
//	return Dist[end];
//}
//
//int main()
//{
//	cin >> N >> M;
//
//	// ��尡 1������ �����ϱ� ������ �� �迭����  N+1�� ����
//
//	// �Ÿ��� INT_MAX�� �ʱ�ȭ
//	Dist.resize(N + 1);
//	fill(Dist.begin(), Dist.end(), INT_MAX);
//
//	// �̹湮(false) ���·� �ʱ�ȭ
//	Visited.resize(N + 1);
//	fill(Visited.begin(), Visited.end(), false);
//
//	// Mlist�� ���� ����Ʈ��, �� ����� ���� ������ ����
//	Mlist.resize(N + 1);
//
//	// ���� ���� �Է�
//	for (int i = 0; i < M; i++)
//	{
//		int start, end, weight;
//		cin >> start >> end >> weight;
//		Mlist[start].push_back(make_pair(end, weight));  // start���� end�� ���� ����ġ weight�� ����
//	}
//
//	// ��� ���� ���� ��� �Է�
//	int startIndex, endIndex;
//	cin >> startIndex >> endIndex;
//
//	// ���ͽ�Ʈ�� �˰��� ���� ��, ��� ��忡�� ���� �������� �ּ� �Ÿ� ���
//	int result = Dijkstra(startIndex, endIndex);
//	cout << result;  // ��� ���
//}u8u8i988888888888888888888888899i8im