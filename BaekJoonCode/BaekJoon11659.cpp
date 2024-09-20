//#include <iostream>
//
//using namespace std;
//
//int arr[100001] = {};
//
////구간 합 구하기 1 11659
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int temp = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//		arr[i] += temp;
//		temp = arr[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int start;
//		int end;
//
//		cin >> start >> end;
//		cout << arr[end] - arr[start - 1] << "\n";
//	}
//}