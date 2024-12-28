//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//// Node Ÿ���� (����, ����)��, ù ��° ���� ���, �� ��° ���� ��� ��ȣ�� �ǹ�
//typedef pair<int, int> Node;
//
//// �ִ� N���� ���� M���� ����, K��° �ִ� ��θ� ã�� ��
//static int N, M, K;
//static int W[1001][1001];  // ���� ��� W, W[a][b]�� a���� b�� ���� ������ ����ġ
//static priority_queue<int> DistQueue[1001];  // �� ��忡 ���� K��°������ �ִ� ��θ� ����
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M >> K;  // ����� ���� N, ������ ���� M, ã���� �ϴ� K��° �ִ� ����� ��
//
//	// ���� ���� �Է�
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;  // a���� b�� ���� ����ġ�� c�� ���� �Է�
//		W[a][b] = c;  // ���� ���� ���� (���� �׷���)
//	}
//
//	// �ּ� ���� ����Ͽ� ���ͽ�Ʈ�� �˰��� ����
//	priority_queue<Node, vector<Node>, greater<Node>> pq;  // (���, ��� ��ȣ) ������ �ּ� ���� ����� ���� greater<Node> ���
//
//	pq.push(make_pair(0, 1));  // ���� ��� 1�� �ʱ�ȭ, ��� 0
//	DistQueue[1].push(0);  // 1�� ����� ��� 0�� DistQueue�� �߰�
//
//	// ���ͽ�Ʈ�� �˰��� ����
//	while (pq.empty() == false)
//	{
//		Node now = pq.top();  // ���� ����� ���� ��� �ϳ��� ����
//		pq.pop();
//
//		// ���� ��忡�� �� �� �ִ� ��� ���� ��� Ž��
//		for (int adjNode = 1; adjNode <= N; adjNode++)
//		{
//			if (W[now.second][adjNode] != 0)  // ������ �����ϴ� ���
//			{
//				int totalCost = now.first + W[now.second][adjNode];
//
//				// K��°������ �ִ� ��θ� ������ �� �ִ� ������ ���� �ִٸ�
//				if (DistQueue[adjNode].size() < K)
//				{
//					DistQueue[adjNode].push(totalCost);  // ���ο� ��� ����� DistQueue�� �߰�
//					pq.push(make_pair(totalCost, adjNode));  // �ش� ��θ� ť�� �߰�
//				}
//				// K��° �ִ� ��θ� �̹� ��������, �� ���� ����� ������ ��δ� ��ü
//				else if (DistQueue[adjNode].top() > totalCost)
//				{
//					DistQueue[adjNode].pop();  // ���� ū ���� ���� (�츮�� K��°������ ��θ� ���ϹǷ�, K���� �ʰ����� �ʰ� ����)
//					DistQueue[adjNode].push(totalCost);  // ���ο� ��θ� �߰�
//					pq.push(make_pair(totalCost, adjNode));  // ��θ� ť�� �߰�
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		// �ش� ��忡 K���� ��ΰ� ������ ���� ū ��θ� ���
//		if (DistQueue[i].size() == K)
//		{
//			cout << DistQueue[i].top() << "\n";  // K��°�� ª�� ��� ���
//		}
//		else
//		{
//			cout << "-1" << "\n";  // K��° �ִ� ��ΰ� ���ٸ� -1 ���
//		}
//	}
//}