//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string a[20001];
//
////사용자 비교 함수
//bool Compare(string& a, string& b)
//{
//	//길이가 같다면
//	if (a.length() == b.length())
//	{
//		// 사전 순으로 정렬 (a,b를 비교를 하면 한 문자씩 아스키 코드의 값을 통해 비교가 자동으로 이루어진다.
//		return a < b;
//	}
//	else
//	{
//		//길이다르다면, 더 짧은 순으로
//		return a.length() < b.length();
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	sort(a, a + n, Compare);
//
//	cout << a[0] << endl;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == a[i - 1])
//			continue;
//
//		cout << a[i] << endl;
//	}
//}