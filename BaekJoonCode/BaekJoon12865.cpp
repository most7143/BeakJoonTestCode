#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int weight[101];
int value[101];
int dp[100001]; // ���� ���� K�� �ִ� 100000�̹Ƿ�

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> weight[i] >> value[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = K; j >= weight[i]; j--) {
			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
		}
	}

	cout << dp[K] << "\n";
	return 0;
}