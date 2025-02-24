#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int N; // 상담 가능한 총 일수
vector<int> D, T, P; // D: 최대 이익을 저장하는 DP 배열, T: 상담 기간, P: 상담 수익

int main()
{
	cin >> N;
	D.resize(N + 2); // DP 배열을 초기화 (이익 계산시 N+1 부터 계산하기 때문에 배열 범위 초가하지 않도록 크기 조정)
	T.resize(N + 1); // 상담 기간 배열 초기화
	P.resize(N + 1); // 상담 수익 배열 초기화

	// 상담 기간과 수익 입력 받기
	for (int i = 1; i <= N; i++)
	{
		cin >> T[i] >> P[i];
	}

	int quitDate = N + 1; //퇴사일

	// DP를 사용하여 최대 이익 계산 (거꾸로 진행)
	for (int i = N; i >= 0; i--)
	{
		int startDayTime = i + T[i]; //해당 날짜에 시작된 상담 시간
		int nextMaxPay = D[i + 1]; // 다음날의 최대 이익

		// 현재 날짜에서 상담을 진행할 경우 퇴사일을 초과하는지 확인 (상담을 하지 않는 경우)
		if (startDayTime > quitDate)
		{
			// 초과하는 경우, 현재 날짜의 최대 이익은 다음 날과 동일
			D[i] = nextMaxPay;
		}
		else
		{
			int savedMaxPay = D[i + T[i]]; //상담이 끝난 후 얻을 수 있는 이익

			// 초과하지 않는 경우, 상담을 진행하는 경우와 진행하지 않는 경우 중 최대값 선택 (상담을 하는 경우)
			D[i] = max(nextMaxPay, P[i] + savedMaxPay);
		}
	}

	// 첫 번째 날부터 시작했을 때 얻을 수 있는 최대 이익 출력
	cout << D[1];
}