#include <iostream>

using namespace std;

int N;

int mod = 1000000000;
long D[1000001];

int main()
{
	cin >> N;
	D[1] = 0; // 혼자서는 선물 교환 X
	D[2] = 1; // 2명일 경우엔 교환이 오로지 1번
	for (int i = 3; i <= N; i++)
	{
		//i명이 교환할 수 있는 경우의 수(점화식)
		D[i] = (i - 1) * (D[i - 1] + D[i - 2]) % mod;
		//값을 넣기전에 마지막에  % mod 연산 수행 (문제 요청사항)
	}

	cout << D[N];
}