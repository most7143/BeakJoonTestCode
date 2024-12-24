//#include <iostream>
//#include <vector>
//#include <queue>
//#include <limits.h>
//
//using namespace std;
//
//// ���� 1753 ����
//
//// edge�� (����ġ, ���) ������ ���� �ǹ�
//typedef pair<int, int> edge;
//
//// ���� ���� ����
//static int V, E, K;  // V: ����� ��, E: ������ ��, K: ��� ���
//static vector<int> Mdistance;  // Mdistance[i]: i�� �������� �ּ� �Ÿ�
//static vector<bool> Visited;   // Visited[i]: i�� ��带 �湮�ߴ��� ����
//static vector<vector<edge>> Mlist;  // Mlist[i]: i�� ���� ����� �������� ����Ʈ
//
//static priority_queue<edge, vector<edge>, greater<edge>> Q;  // �켱���� ť, (����ġ, ���) �������� �ּҰ��� �켱 ó��
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> V >> E >> K;
//
//	// Mdistance ���� �ʱ�ȭ (��� ��忡 ���� ���Ѵ�� ����)
//	Mdistance.resize(V + 1);
//	fill(Mdistance.begin(), Mdistance.end(), INT_MAX);
//
//	// Visited ���� �ʱ�ȭ (��� ��� �̹湮 ���·� ����)
//	Visited.resize(V + 1);
//	fill(Visited.begin(), Visited.end(), false);
//
//	// Mlist �ʱ�ȭ (�� ����� ���� ����Ʈ)
//	Mlist.resize(V + 1);
//
//	for (int i = 0; i < E; i++)
//	{
//		int u, v, w;
//		cin >> u >> v >> w;  // ���� u -> v, ����ġ w �Է�
//
//		Mlist[u].push_back(make_pair(v, w));  // u -> v ���� �߰�
//	}
//
//	// ��� ��� K���� ���� (�ʱ� ����ġ�� 0)
//	Q.push(make_pair(0, K));
//	Mdistance[K] = 0;  // ��� ����� �ּ� �Ÿ��� 0
//
//	// ���ͽ�Ʈ�� �˰���
//	while (!Q.empty())
//	{
//		edge now = Q.top();  // ���� ���� ����ġ�� ��带 ������
//		Q.pop();
//
//		int nowV = now.second;  // ���� ���
//
//		if (Visited[nowV])
//		{
//			continue;
//		}
//
//		Visited[nowV] = true;
//
//		// ���� ���� ����� ��� ��忡 ���� �ּ� �Ÿ� ����
//		for (int i = 0; i < Mlist[nowV].size(); i++)
//		{
//			edge temp = Mlist[nowV][i];
//			int next = temp.first;  // ����� ���� ���
//			int value = temp.second;  // ����ġ
//
//			// ���� �������� �Ÿ��� �� ª���� ����
//			if (Mdistance[next] > Mdistance[nowV] + value)
//			{
//				Mdistance[next] = Mdistance[nowV] + value;
//				Q.push(make_pair(Mdistance[next], next));  // ���ŵ� �Ÿ��� �켱���� ť�� ����
//			}
//		}
//	}
//
//	for (int i = 1; i <= V; i++)
//	{
//		if (Visited[i])
//		{
//			cout << Mdistance[i] << "\n";
//		}
//		else
//		{
//			cout << "INF" << "\n";
//		}
//	}
//}