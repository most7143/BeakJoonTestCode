//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string a[20001];
//
////����� �� �Լ�
//bool Compare(string& a, string& b)
//{
//	//���̰� ���ٸ�
//	if (a.length() == b.length())
//	{
//		// ���� ������ ���� (a,b�� �񱳸� �ϸ� �� ���ھ� �ƽ�Ű �ڵ��� ���� ���� �񱳰� �ڵ����� �̷������.
//		return a < b;
//	}
//	else
//	{
//		//���̴ٸ��ٸ�, �� ª�� ������
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