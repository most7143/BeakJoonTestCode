//#include <iostream>
//
//using namespace std;
//
////�ִ� ����� (��Ŭ���� ȣ����)
//int GCD(long a, long b)
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
//	long a, b;
//	cin >> a >> b;
//
//	long result = GCD(a, b);
//
//	//�ִ� �������ŭ 1�� ������ �þ�� ��Ģ�� �̿�
//	while (result > 0)
//	{
//		cout << "1";
//		result--;
//	}
//}