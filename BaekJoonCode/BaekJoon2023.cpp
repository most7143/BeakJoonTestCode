//#include <iostream>
//
//using namespace std;
//
//void DFS(int number, int size);
//bool IsPrime(int number);
//
//static int N;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	int first[4] = { 2,3,5,7 };
//
//	//ù��° �ڸ����� 2,3,5,7�� Ȯ���ϸ� �ȴ�.
//	for (int i = 0; i < 4; i++)
//	{
//		DFS(first[i], 1);
//	}
//}
//
//void DFS(int number, int size)
//{
//	if (size == N)
//	{
//		if (IsPrime(number))
//		{
//			cout << number << "\n";
//		}
//
//		return;
//	}
//
//	//Ȧ���� Ȯ���ϸ�ȴ�.
//	for (int i = 1; i < 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//
//		//�ڸ����� �Լ� �����ָ鼭 �ڸ����� �÷�����.
//		if (IsPrime(number * 10 + i))
//		{
//			DFS(number * 10 + i, size + 1);
//		}
//	}
//}
//
////�Ҽ����� Ȯ���ϴ� �Լ�, number�� i�� ���������� ���� 0�̸� �Ҽ��� �ƴϴ�, i�� �ִ밪�� number���� ����
//bool IsPrime(int number)
//{
//	for (int i = 2; i <= number / 2; i++)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}