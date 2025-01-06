//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//static vector<int> Parents;
//
//typedef struct Edge
//{
//	int s, e, v;  // ������ s, ���� e, ����ġ v
//	// �켱���� ť���� ������ ����ġ�� ���� ������ ���ĵǵ��� > ������ �����ε�
//	bool operator>(const Edge& temp) const
//	{
//		return v > temp.v;  // ����ġ�� ū ��� �켱������ ����
//	}
//}Edge;
//
//// �θ� ã�� �Լ� (��� ����)
//int Find(int a)
//{
//	// a�� �ڱ� �ڽ��� �θ���, a�� ��ȯ
//	if (a == Parents[a])
//	{
//		return a;
//	}
//	else
//	{
//		// ��� ����: �θ� �ٷ� ã�� �θ�� ������Ʈ�Ͽ� Ʈ�� ���̸� ����
//		return Parents[a] = Find(Parents[a]);
//	}
//}
//
//// Union �Լ�: �� ������ ��ġ�� �Լ�
//void Union(int a, int b)
//{
//	a = Find(a);  // a�� �θ� ã��
//	b = Find(b);  // b�� �θ� ã��
//
//	// a�� b�� ���� �ٸ� ���տ� ���ϸ� ��ħ
//	if (a != b)
//	{
//		Parents[b] = a;  // b�� �θ� a�� ����
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	// �켱���� ť (����ġ�� ���� ������ ������ ó��)
//	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//	// �θ� �迭�� ũ�� N+1�� �ʱ�ȭ
//	Parents.resize(N + 1);
//
//	// �� ����� �θ� �ڱ� �ڽ����� �ʱ�ȭ
//	for (int i = 0; i <= N; i++)
//	{
//		Parents[i] = i;
//	}
//
//	// M���� ���� ������ �Է¹޾� �켱���� ť�� ����
//	for (int i = 0; i < M; i++)
//	{
//		int s, e, v;
//		cin >> s >> e >> v;  // ������ ������, ����, ����ġ �Է�
//		pq.push(Edge{ s, e, v });  // ���� ������ ť�� ����
//	}
//
//	int useEdge = 0;  // ����� ������ ��
//	int result = 0;   // �ּ� ���� Ʈ���� ����ġ ��
//
//	// �ּ� ���� Ʈ������ ����� ������ N-1���� �� ������ �ݺ�
//	while (useEdge < N - 1)
//	{
//		// �켱���� ť���� ���� ���� ����ġ�� ���� ���� ������
//		Edge now = pq.top();
//		pq.pop();
//
//		// �������� ������ ���� �ٸ� ���տ� ���ϸ� ��ħ (����Ŭ�� ������ ����)
//		if (Find(now.s) != Find(now.e))
//		{
//			Union(now.s, now.e);  // �� ������ ��ħ
//			result += now.v;      // ����ġ�� ����� ����
//			useEdge++;            // ����� ������ �� ����
//		}
//	}
//
//	cout << result;
//}