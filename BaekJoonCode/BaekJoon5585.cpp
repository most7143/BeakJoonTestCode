//#include <iostream>
//
//using namespace std;
//
////���� ������� ������ ����ϱ� ���� �迭�� ����
//int coin[6] = { 500,100,50,10,5,1 };
//
//int main()
//{
//	int n;
//
//	int result = 0;
//	cin >> n;
//
//	//�Ž����� �� ���
//	n = 1000 - n;
//
//	for (int i = 0; i < 6; i++)
//	{
//		if (coin[i] <= n)
//		{
//			//i��° ������ ������ ��(���ΰ���)�� ����
//			result += n / coin[i];
//
//			//�Ž������� ������Ʈ �Ѵ�.
//			n %= coin[i];
//		}
//	}
//
//	cout << result;
//}