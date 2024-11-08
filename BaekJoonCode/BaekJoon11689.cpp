#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N;
	cin >> N;

	long result = N;

	//소인수 분해 방식
	for (long i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0)
		{
			//오일러 피 함수 공식을 적용
			result -= result / i;

			while (N % i == 0)
			{
				N /= i;
			}
		}
	}

	//N이 소수가 아니라면 업데이트
	if (N > 1)
	{
		result -= result / N;
	}

	cout << result;
}