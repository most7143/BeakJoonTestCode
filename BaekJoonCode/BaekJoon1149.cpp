//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//
//
//	//최대 길이 저장, 두번째 인덱스는 0 = 빨강 , 1 = 초록 , 2 = 파랑
//	int cost[1001][3];
//	int dp[1001][3];
//
//	cin >> n;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
//
//		if (i == 0)
//		{
//			//처음은 비교할 대상이 없기 때문에 값을 저장
//			dp[i][0] = cost[i][0];
//			dp[i][1] = cost[i][1];
//			dp[i][2] = cost[i][2];
//		}
//		else
//		{
//			//이전에 있던 집에서 같은색이 아닌 것 중에 더 낮은 비용을 가지고 있는 색상을 저장
//			dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
//			dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
//			dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
//		}
//	}
//
//	//마지막까지 칠해졌다면 세개의 색 중에서 가장 비용이 낮게 들어간 색을 찾아서 출력
//	cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
//}