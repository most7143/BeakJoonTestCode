#include <iostream>
#include <vector>

using namespace std;

int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	vector<int> arr(N + 1, 0); // 계단 점수 저장
	vector<int> dp(N + 1, 0); // 도착한 계단의 누적 점수 저장

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}

	dp[1] = arr[1]; // 첫번째 계단은 무조건 밟음

	dp[2] = arr[1] + arr[2]; // 누적 저장

	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]); // 두가지의 경우의 수 중에서 값을 높은 값 저장

	for (int i = 4; i <= N; i++)
	{
		int oneStep = dp[i - 2] + arr[i]; //한칸을 뛰고 도착
		int twoSteps = dp[i - 3] + arr[i - 1] + arr[i]; // 두 칸 연속 밟기

		dp[i] = max(oneStep, twoSteps);
	}

	cout << dp[N];
}