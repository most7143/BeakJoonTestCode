#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	vector<vector<int>> A; // ���� ����Ʈ (�� ��尡 �����ϴ� ��带 ����)
	vector<int> Indegree; // �� ����� ���� ����
	vector<int> SelfBuild; // �� �ǹ��� ���� �� �ɸ��� �ð�
	vector<int> Result; // �� �ǹ��� �ϰ� �ð��� ����

	cin >> N;

	A.resize(N + 1);
	Indegree.resize(N + 1);
	SelfBuild.resize(N + 1);
	Result.resize(N + 1);

	// �ǹ��� ���� ���� �Է�
	for (int i = 1; i <= N; i++)
	{
		cin >> SelfBuild[i]; // �� �ǹ��� �Ǽ��� �ɸ��� �ð� �Է�
		while (true)
		{
			int temp;
			cin >> temp;

			if (temp != -1) // -1�� �ƴ� ���� �����ϴ� �ǹ�
			{
				A[temp].push_back(i); // �ǹ� i�� �ǹ� temp�� �����Ѵٴ� ���� �߰�
				Indegree[i]++; // �ǹ� i�� ������ ����(���� ����)�� �ϳ� ����
			}
			else
			{
				break;
			}
		}
	}

	queue<int> MyQueue; // ���� ������ ���� ť

	// ���� ������ �����Ϸ��� ���� ������ 0�� ��带 ť�� �ִ´�.
	for (int i = 1; i <= N; i++)
	{
		if (Indegree[i] == 0) // ���� ������ 0�� ���� ���� � �ǹ��� �������� ����
		{
			MyQueue.push(i); // ���� ������ ���������� ť�� �ִ´�.
		}
	}

	// ť�� ������� ������ ��� ����
	while (false == MyQueue.empty())
	{
		int now = MyQueue.front(); // ť���� ��� �ϳ��� ������.
		MyQueue.pop();

		// ���� ����� ��� �ļ� ���鿡 ���� ó��
		for (int next : A[now]) // ���� ��忡 �����ϴ� ��� �ļ� ���
		{
			Indegree[next]--; // ���� ��带 ó�������Ƿ�, �ļ� ����� ���� ������ �ϳ� ����
			// �ļ� ����� �ϰ� �ð��� ���� (���� �ǹ��� �ϰ��� �ð� + ���� �ǹ��� ���� �ð�)
			Result[next] = max(Result[next], Result[now] + SelfBuild[now]);

			// �ļ� ����� ���� ������ 0�̸�, ���� �� ��带 ó���� �� �ִ�.
			if (Indegree[next] == 0)
			{
				MyQueue.push(next); // ���� ������ 0�� �� �ļ� ��带 ť�� �߰�
			}
		}
	}

	// �� �ǹ��� �ϰ� �ð��� ���
	for (int i = 1; i <= N; i++)
	{
		cout << Result[i] + SelfBuild[i] << "\n";
	}
}