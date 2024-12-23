//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	// N: ����� ����, M: ������ ����
//	int N, M;
//
//	cin >> N >> M;
//
//	// �׷����� ���õ� �ڷᱸ�� �ʱ�ȭ
//	vector<vector<pair<int, int>>> A;           // A�� �� ��忡�� ����� ����(����)�� ������ ����
//	vector<vector<pair<int, int>>> reverseA;    // reverseA�� ������ �׷���(�� ���� ������ ����)�� ������ ����
//	vector<int> indegree;                       // �� ���� ������ ������ ���� (��������)
//	vector<int> result;                         // �� ������ �����ϴ� �ִ� �Ÿ�(����ġ ��)
//
//	A.resize(N + 1);
//	reverseA.resize(N + 1);
//	indegree.resize(N + 1);
//	result.resize(N + 1);
//
//	// M���� ���� �Է� ó��
//	for (int i = 1; i <= M; i++)
//	{
//		int S, E, V;
//
//		cin >> S >> E >> V;
//
//		// ���� (S -> E)�� ����ġ V �Է�
//		A[S].push_back(make_pair(E, V));
//
//		// ������ �׷����� (E -> S)�� ����ġ V �Է�
//		reverseA[E].push_back(make_pair(S, V));
//
//		// E�� ������ ������ �ϳ� �� �߰��ǹǷ� indegree[E] ����
//		indegree[E]++;
//	}
//
//	// ���� ���� �� ��� �Է�
//	int start, end;
//
//	cin >> start >> end;
//
//	// ���� ������ ���� ť (���� ������ ���� ��� Ž��)
//	queue<int> myQueue;
//
//	// ���� ��带 ť�� ����
//	myQueue.push(start);
//
//	// ť�� �� ������ �ݺ�
//	while (false == myQueue.empty())
//	{
//		// ť���� ���� ��� ����
//		int now = myQueue.front();
//		myQueue.pop();
//
//		// ���� ���� ����� ������ Ž��
//		for (pair<int, int> next : A[now])
//		{
//			// next.first�� ������ ���, next.second�� �� ������ ����ġ
//			indegree[next.first]--; // next ������ ���� ������ ���ҽ�Ŵ
//
//			// �ش� ��忡 �����ϴ� �ִ� �Ÿ��� ����
//			result[next.first] = max(result[next.first], result[now] + next.second);
//
//			// ���� ���������� 0�̶��, �ش� ���� �� �̻� ���� ��尡 �����Ƿ� ť�� ����
//			if (indegree[next.first] == 0)
//			{
//				myQueue.push(next.first);
//			}
//		}
//	}
//
//	// �� ��忡 �����ϴ� ��� ������ ���� ���� ����
//	int resultCount = 0;
//
//	// �湮 ���� üũ�� ����
//	vector<bool> visited;
//	visited.resize(N + 1);
//
//	// �� ������ �Ųٷ� ��� Ž���� ���� ť
//	queue<int> requeue;
//
//	// �� ��带 ť�� ����
//	requeue.push(end);
//
//	// �� ���� �̹� �湮�����Ƿ� �湮 ǥ��
//	visited[end] = true;
//
//	// �� ������ ������ �׷����� ���� Ž��
//	while (false == requeue.empty())
//	{
//		// ť���� ���� ��� ����
//		int now = requeue.front();
//		requeue.pop();
//
//		// ���� ���� �� �� �ִ� ��� ������ Ž�� (reverseA)
//		for (pair<int, int> next : reverseA[now])
//		{
//			// ������ ��ο��� �ִ� �Ÿ��� �����ϴ� ��常�� ����
//			if (result[next.first] + next.second == result[now])
//			{
//				resultCount++; // ��� ���� ����
//
//				// ���� �湮���� ���� ���� ť�� �ְ� �湮 ǥ��
//				if (visited[next.first] == false)
//				{
//					visited[next.first] = true;
//					requeue.push(next.first);
//				}
//			}
//		}
//	}
//
//	cout << result[end] << "\n"; // �� �������� �ִ� �Ÿ� ���
//	cout << resultCount;         // �� �������� �ִ� �Ÿ��� �����ϴ� ����� ���� ���
//}