//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int result = 0;
//
//	vector<int> A;
//	vector<int> B;
//
//	cin >> n;
//
//	int num = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		A.push_back(num);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		B.push_back(num);
//	}
//
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end(), greater<int>());
//
//	for (int i = 0; i < n; i++)
//	{
//		result += A[i] * B[i];
//	}
//
//	cout << result;
//}