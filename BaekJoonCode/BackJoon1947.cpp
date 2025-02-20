#include <iostream>

using namespace std;

int N;

int mod = 1000000000;
long D[1000001];

int main()
{
	cin >> N;
	D[1] = 0; // ȥ�ڼ��� ���� ��ȯ X
	D[2] = 1; // 2���� ��쿣 ��ȯ�� ������ 1��
	for (int i = 3; i <= N; i++)
	{
		//i���� ��ȯ�� �� �ִ� ����� ��(��ȭ��)
		D[i] = (i - 1) * (D[i - 1] + D[i - 2]) % mod;
		//���� �ֱ����� ��������  % mod ���� ���� (���� ��û����)
	}

	cout << D[N];
}