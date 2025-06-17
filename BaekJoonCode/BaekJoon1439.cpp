//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string s;
//
//	cin >> s;
//
//	char now = s[0];
//
//	int count = 0;
//	for (int i = 1; i < s.length(); i++)
//	{
//		if (now != s[i])
//		{
//			count++;
//			now = s[i];
//		}
//	}
//
//	if (count % 2 == 0)
//	{
//		count /= 2;
//	}
//	else
//	{
//		count /= 2;
//		count++;
//	}
//
//	cout << count;
//}