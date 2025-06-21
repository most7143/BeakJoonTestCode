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

		// 1번 규칙인 곱하기2가 가능한 조건 찾기
		if (b % 2 == 0)
		{
			b /= 2;
		}
		//2번 규칙인 끝의 자리수가 1인지 찾기
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