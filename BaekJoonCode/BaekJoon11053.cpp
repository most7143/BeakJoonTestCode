//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	int arr[1001];
//	int ans = 1;
//	cin >> n;
//
//	for (int i = 0; i < n;i++)
//	{
//		cin >> arr[i];
//	}
//
//	//초기 dp를 전부 1로 설정한다.
//	vector<int> dp(n, 1);
//
//	//i번째 원소를 기준으로 루프
//	for (int i = 0; i < n;i++)
//	{
//		//j-이전원소를 비교
//		for (int j = 0; j < i;j++)
//		{
//			// 이전원소들 보다 i번째 원소가 더 크다면
//			if (arr[j] < arr[i])
//			{
//				//둘중에 긴 값을 넣기
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//
//		//최대 길이 선택
//		ans = max(ans, dp[i]);
//	}
//
//	cout << ans;
//}