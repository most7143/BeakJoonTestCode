#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int count = 1;

	cin >> a >> b;

	while (a != b)
	{
		if (b < a)
		{
			count = -1;
			break;
		}

		// 1�� ��Ģ�� ���ϱ�2�� ������ ���� ã��
		if (b % 2 == 0)
		{
			b /= 2;
		}
		//2�� ��Ģ�� ���� �ڸ����� 1���� ã��
		else if (b % 10 == 1)
		{
			b /= 10;
		}
		else
		{
			count = -1;
			break;
		}

		count++;
	}

	cout << count;
}