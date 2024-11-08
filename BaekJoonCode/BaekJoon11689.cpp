#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N;
	cin >> N;

	long result = N;

	//���μ� ���� ���
	for (long i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0)
		{
			//���Ϸ� �� �Լ� ������ ����
			result -= result / i;

			while (N % i == 0)
			{
				N /= i;
			}
		}
	}

	//N�� �Ҽ��� �ƴ϶�� ������Ʈ
	if (N > 1)
	{
		result -= result / N;
	}

	cout << result;
}