//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//// �θ� ��带 �����ϴ� ����
//static vector<int> Parents;
//
//// ����(Edge)�� ��Ÿ���� ����ü
//// ���� ����ü�� ������, ����, ����ġ�� ������, �켱���� ť���� ����ġ�� �������� ���ĵ� �� �ֵ��� operator >�� �����մϴ�.
//typedef struct Edge {
//	int s, e, v;  // ������, ����, ����ġ
//	bool operator > (const Edge& temp) const
//	{
//		return v > temp.v;  // ����ġ �������� �켱���� ť���� ����
//	}
//} Edge;
//
//// �θ� ��带 ã�� �Լ� (��� ����)
//int Find(int a)
//{
//	if (Parents[a] == a)  // �θ� �ڱ� �ڽ��̸� �� ��ü�� ��Ʈ ���
//	{
//		return a;
//	}
//
//	// �θ� ��������� ã�ư��鼭 ��� ����
//	return Parents[a] = Find(Parents[a]);
//}
//
//// �� ������ ��ġ�� �Լ� (������)
//void Union(int a, int b)
//{
//	a = Find(a);  // a�� ��Ʈ ��� ã��
//	b = Find(b);  // b�� ��Ʈ ��� ã��
//
//	if (a != b)  // a�� b�� ���� �ٸ��� ��ħ
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
//	int N, sum = 0;
//	cin >> N;  // N�� ����� ���� (��, ������ ���� N-1��)
//
//	// �켱���� ť ���� (������ ����ġ�� �������� ������������ ����)
//	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//	// ���� ������ �Է¹ް� �켱���� ť�� �ֱ�
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			// ���� �ϳ��� �о���� �ڵ�
//			char tempc = cin.get();
//
//			// ���ο� ���� ������ ��, ���ʿ��� �ٹٲ� ���ڸ� ó��
//			if (tempc == '\n')
//			{
//				tempc = cin.get();
//			}
//
//			int temp = 0;
//
//			// ���ڿ� ���� ����ġ�� ���
//			if (tempc >= 'a' && tempc <= 'z')
//			{
//				temp = tempc - 'a' + 1;  // 'a'�� 1, 'b'�� 2, ..., 'z'�� 26
//			}
//			else if (tempc >= 'A' && tempc <= 'Z')
//			{
//				temp = tempc - 'A' + 27;  // 'A'�� 27, 'B'�� 28, ..., 'Z'�� 52
//			}
//			sum += temp;  // ����ġ�� �ջ�
//
//			// i�� j�� ���� �ʰ�, ����ġ�� 0�� �ƴ� ��쿡�� ���� �߰�
//			if (i != j && temp != 0)
//			{
//				pq.push(Edge{ i,j,temp });  // �켱���� ť�� ���� ����
//			}
//		}
//	}
//
//	// �θ� �ڱ� �ڽ����� �ʱ�ȭ (�ʱ⿡�� ��� �������� ����)
//	Parents.resize(N);
//	for (int i = 0; i < N; i++)
//	{
//		Parents[i] = i;
//	}
//
//	int useEdge = 0;  // ���� ������ ����
//	int result = 0;   // �ּ� ���д� Ʈ���� ����ġ ��
//
//	// �켱���� ť���� ������ �ϳ��� �����鼭 �ּ� ���д� Ʈ���� ����
//	while (!pq.empty())
//	{
//		Edge now = pq.top();  // ť���� ���� ����ġ�� ���� ���� ������
//		pq.pop();
//
//		// �������� ������ ���� �ٸ� ���տ� ���� ��� (����Ŭ�� ������ ����)
//		if (Find(now.s) != Find(now.e))
//		{
//			Union(now.s, now.e);  // �� ������ ��ħ
//			result += now.v;      // ����ġ�� ����� ����
//			useEdge++;            // ���� ������ ���� ����
//		}
//	}
//
//	// �ּ� ���д� Ʈ���� �������� Ȯ��
//	// ���� ������ ���� N-1����� MST�� �����Ǿ����Ƿ� ��� ���
//	if (useEdge == N - 1)
//	{
//		cout << sum - result;  // ��ü ����ġ���� MST ����ġ�� ���� ���
//	}
//	else
//	{
//		cout << "-1";  // MST�� �Ұ����ϸ� -1 ���
//	}
//}