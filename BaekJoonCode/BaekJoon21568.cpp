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

//확장 유클리드 호제법
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

		//재귀함수 형태로 구현
		vector<long> v = Execute(b, a % b);

		//자동적으로 역순으로 값이 계산됌.
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

	//c를 최대공약수로 나누었을때 나머지가 0이 아니라면 해가 X
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