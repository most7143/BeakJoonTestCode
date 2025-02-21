#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int N;
vector<int> D; //연산횟수를 저장하기 위한 배열

int main()
{
	cin >> N;

	D.resize(N + 1);
	D[1] = 0;

	//연산 횟수를 구하는 방법 3가지로 설정
	for (int i = 2; i <= N; i++)
	{
		//기본 점화식으로 기본 연산횟수를 갱신
		D[i] = D[i - 1] + 1;

		//2를 나눌 수 있다면
		if (i % 2 == 0)
		{
			//갱신된 D[i]와 2로 나누어 계산된 값 중 연산횟수가 더 적은 값을 갱신
			D[i] = min(D[i], D[i / 2] + 1);
		}

		//3으로 나눌 수 있다면
		if (i % 3 == 0)
		{
			//갱신된 D[i]와 3으로 나누어 계산된 값 중 연산횟수가 더 적은 값을 갱신
			D[i] = min(D[i], D[i / 3] + 1);
		}
	}

	cout << D[N];
}