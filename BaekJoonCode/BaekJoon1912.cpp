#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int answer;

	cin >> N;

	vector<int> arr(N, 1);
	vector<int> dp(N, 1);

	for (int i = 0; i < N;i++)
	{
		cin >> arr[i];
	}

	dp[0] = arr[0];
	answer = arr[0];

	for (int i = 1; i < N;i++)
	{
		dp[i] = max(arr[i], arr[i] + dp[i - 1]);
		answer = max(answer, dp[i]);
	}
	cout << answer;
}