#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;  // N: ���(���) ��, M: ����(ģ�� ����) ��
	long mDistance[101][101];  // ����� ���� �Ÿ�(ģ�е�) ���� �迭 (�ִ� 100��)

	cin >> N >> M;

	// �ʱ� �Ÿ� �迭�� ����
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
			{
				mDistance[i][j] = 0;  // �ڱ� �ڽŰ��� �Ÿ��� 0
			}
			else
			{
				mDistance[i][j] = 100000001;  // �ٸ� ������� �Ÿ��� ������ �ִٰ� ���� (�ִ밪���� ū ��)
			}
		}
	}

	// ���谡 �־����� �� ���迡 ���� �Ÿ��� 1�� ����
	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;  // ��� s�� e�� ģ�е� 1�� ����
		mDistance[s][e] = 1;
		mDistance[e][s] = 1;  // ����� �����̹Ƿ� e�� s�� �Ÿ��� 1�� ����
	}

	// �÷��̵�-�ͼ� �˰��� ����: ��� ���� �ִ� �Ÿ� ���
	for (int k = 1; k <= N; k++)  // �߰� ��� k
	{
		for (int i = 1; i <= N; i++)  // ��� ��� i
		{
			for (int j = 1; j <= N; j++)  // ���� ��� j
			{
				// i���� j�� ���� ��ΰ� i->k�� k->j�� ��ġ�� �ͺ��� �� ª���� �Ÿ� ����
				if (mDistance[i][j] > mDistance[i][k] + mDistance[k][j])
				{
					mDistance[i][j] = mDistance[i][k] + mDistance[k][j];
				}
			}
		}
	}

	int min = INT_MAX;  // �ּ� �Ÿ� ���� ������ ���� (���� ģ���� ����� ã�� ����)
	int answer = -1;  // ���� ģ���� ����� ��ȣ

	// �� ����� ���� �� ����� ��� ��� ���� �Ÿ� ���� ���
	for (int i = 1; i <= N; i++)
	{
		int temp = 0;  // ��� i�� ��� ������� �Ÿ� ��
		for (int j = 1; j <= N; j++)
		{
			temp += mDistance[i][j];  // �Ÿ� �� ���
		}

		// �Ÿ� ���� �� ���� ����� ������ �� ������� ����
		if (min > temp)
		{
			min = temp;
			answer = i;
		}
	}

	cout << answer;
}