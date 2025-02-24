#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int N; // ��� ������ �� �ϼ�
vector<int> D, T, P; // D: �ִ� ������ �����ϴ� DP �迭, T: ��� �Ⱓ, P: ��� ����

int main()
{
	cin >> N;
	D.resize(N + 2); // DP �迭�� �ʱ�ȭ (���� ���� N+1 ���� ����ϱ� ������ �迭 ���� �ʰ����� �ʵ��� ũ�� ����)
	T.resize(N + 1); // ��� �Ⱓ �迭 �ʱ�ȭ
	P.resize(N + 1); // ��� ���� �迭 �ʱ�ȭ

	// ��� �Ⱓ�� ���� �Է� �ޱ�
	for (int i = 1; i <= N; i++)
	{
		cin >> T[i] >> P[i];
	}

	int quitDate = N + 1; //�����

	// DP�� ����Ͽ� �ִ� ���� ��� (�Ųٷ� ����)
	for (int i = N; i >= 0; i--)
	{
		int startDayTime = i + T[i]; //�ش� ��¥�� ���۵� ��� �ð�
		int nextMaxPay = D[i + 1]; // �������� �ִ� ����

		// ���� ��¥���� ����� ������ ��� ������� �ʰ��ϴ��� Ȯ�� (����� ���� �ʴ� ���)
		if (startDayTime > quitDate)
		{
			// �ʰ��ϴ� ���, ���� ��¥�� �ִ� ������ ���� ���� ����
			D[i] = nextMaxPay;
		}
		else
		{
			int savedMaxPay = D[i + T[i]]; //����� ���� �� ���� �� �ִ� ����

			// �ʰ����� �ʴ� ���, ����� �����ϴ� ���� �������� �ʴ� ��� �� �ִ밪 ���� (����� �ϴ� ���)
			D[i] = max(nextMaxPay, P[i] + savedMaxPay);
		}
	}

	// ù ��° ������ �������� �� ���� �� �ִ� �ִ� ���� ���
	cout << D[1];
}