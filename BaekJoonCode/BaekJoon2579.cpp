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

	vector<int> arr(N + 1, 0); // ��� ���� ����
	vector<int> dp(N + 1, 0); // ������ ����� ���� ���� ����

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}

	dp[1] = arr[1]; // ù��° ����� ������ ����

	dp[2] = arr[1] + arr[2]; // ���� ����

	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]); // �ΰ����� ����� �� �߿��� ���� ���� �� ����

	for (int i = 4; i <= N; i++)
	{
		int oneStep = dp[i - 2] + arr[i]; //��ĭ�� �ٰ� ����
		int twoSteps = dp[i - 3] + arr[i - 1] + arr[i]; // �� ĭ ���� ���

		dp[i] = max(oneStep, twoSteps);
	}

	cout << dp[N];
}