//#include <iostream>
//
//using namespace std;
//
////�ִ� ����� �Լ� ���ϴ� ��� �Լ� (��Ŭ���� ȣ����)
//int GCD(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return GCD(b, a % b);
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	int result = 0;
//
//	for (int i = 0; i < t; i++)
//	{
//		int a, b;
//
//		cin >> a >> b;
//
//		//�ּ� �����  = �� ���� �� / �ִ� �����
//		result = a * b / GCD(a, b);
//
//		cout << result << "\n";
//	}
//}