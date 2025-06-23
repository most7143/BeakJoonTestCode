#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N;
int Count;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		//���� �ɻ� ����, ���� �ɻ� ������ ���� �ڷᱸ�� ����
		vector<pair<int, int>> applicants;

		for (int j = 0; j < N; j++)
		{
			int a, b;

			cin >> a >> b;

			applicants.push_back({ a,b });
		}

		//���� �ɻ縦 �������� ����
		sort(applicants.begin(), applicants.end());

		Count = 1;

		//������ �� �ּ� ��� �迭 ��ġ
		int min = 0;

		for (int j = 1; j < N; j++)
		{
			//����� �� ������ �հ����� �߰��ϰ�, �ּ� ����� �����Ѵ�.
			//�����ϴ� ������ �̹� ������ ������ �߱� ������ ������ ���� ��� �� �� ���� ��츦 �ɷ����� ����
			if (applicants[min].second >= applicants[j].second)
			{
				min = j;
				Count++;
			}
		}

		cout << Count << endl;
	}
}