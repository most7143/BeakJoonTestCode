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
//	//�ʱ� dp�� ���� 1�� �����Ѵ�.
//	vector<int> dp(n, 1);
//
//	//i��° ���Ҹ� �������� ����
//	for (int i = 0; i < n;i++)
//	{
//		//j-�������Ҹ� ��
//		for (int j = 0; j < i;j++)
//		{
//			// �������ҵ� ���� i��° ���Ұ� �� ũ�ٸ�
//			if (arr[j] < arr[i])
//			{
//				//���߿� �� ���� �ֱ�
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//
//		//�ִ� ���� ����
//		ans = max(ans, dp[i]);
//	}
//
//	cout << ans;
//}