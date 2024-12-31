#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	long mDistance[101][101];  // �ִ� �Ÿ��� �����ϴ� 2D �迭 (�ִ� 101x101 ũ��)

	cin >> N >> M;

	// �ʱ� �Ÿ� ���� (�ִ밪���� �ʱ�ȭ)
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)  // �ڱ� �ڽſ��� ���� �Ÿ��� 0
			{
				mDistance[i][j] = 0;
			}
			else  // �ٸ� �������� ���� �Ÿ��� �ſ� ū ������ ����
			{
				mDistance[i][j] = 10000001;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;  // ���� (s -> e) �� ����ġ v �Է� �ޱ�
		if (mDistance[s][e] > v)  // ������ ���� ����ġ�� ���� �� �����Ƿ� �ּ� ����ġ�� ����
		{
			mDistance[s][e] = v;
		}
	}

	// �÷��̵�-�ͼ� �˰���
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			for (int k = 1; k <= N; k++)
			{
				// j -> k�� �ִ� �Ÿ��� j -> i�� i -> k�� ��ģ ��κ��� ��ٸ� ����
				if (mDistance[j][k] > mDistance[j][i] + mDistance[i][k])
				{
					mDistance[j][k] = mDistance[j][i] + mDistance[i][k];
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (mDistance[i][j] == 10000001)
			{
				cout << "0 ";
			}
			else
			{
				cout << mDistance[i][j] << " ";
			}
		}
		cout << "\n";
	}
}