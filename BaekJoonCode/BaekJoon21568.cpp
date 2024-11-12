#include <iostream>
#include <vector>

using namespace std;

long GCD(long a, long b)
{
	if (b == 0)
	{
		return a;
	}

	return GCD(b, a % b);
}

//Ȯ�� ��Ŭ���� ȣ����
vector<long> Execute(long a, long b)
{
	vector<long> ret(2);

	if (b == 0)
	{
		ret[0] = 1;
		ret[1] = 0;
		return ret;
	}
	else
	{
		long q = a / b;

		//����Լ� ���·� ����
		vector<long> v = Execute(b, a % b);

		//�ڵ������� �������� ���� ����.
		ret[0] = v[1];
		ret[1] = v[0] - v[1] * q;
		return ret;
	}
}

int main()
{
	long a, b, c;

	cin >> a >> b >> c;

	long tgcd = GCD(a, b);

	//c�� �ִ������� ���������� �������� 0�� �ƴ϶�� �ذ� X
	if (c % tgcd != 0)
	{
		cout << -1;
	}
	else
	{
		int m = (int)(c / tgcd);
		vector<long> ret = Execute(a, b);
		cout << ret[0] * m << " " << ret[1] * m;
	}
}