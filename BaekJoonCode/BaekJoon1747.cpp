//#include<iostream>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
////���������� ��ġ�ϴ� �� üũ�ϴ� �Լ�
//bool IsPalin(int a);
//
//int main()
//{
//	const int maxSize = 10000001;
//
//	//�迭�� ũ�Ⱑ Ŀ ������ �Ҵ�
//	int* A = new int[maxSize];
//
//	int N;
//	cin >> N;
//
//	for (int i = 2; i < maxSize; i++)
//	{
//		A[i] = i;
//	}
//
//	//�Ҽ��� i�� �������� ���� �ʴ´�.
//	for (int i = 2; i < sqrt(maxSize); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		for (int j = i * 2; j <= maxSize; j += i)
//		{
//			A[j] = 0;
//		}
//	}
//
//	//N���� ũ��, �� �� ���� ���� ������ Ž��
//	for (int i = 0; i < maxSize; i++)
//	{
//		if (A[i] >= N)
//		{
//			if (IsPalin(A[i]))
//			{
//				cout << A[i];
//				break;
//			}
//		}
//	}
//}
//
//bool IsPalin(int a)
//{
//	//�񱳸� ���� string���� ����ȯ
//	string str = to_string(a);
//
//	int start = 0;
//	int end = str.size() - 1;
//
//	//start�� end�� ���� ���� ���������� ��ġ�� �̵�.
//	while (start < end)
//	{
//		if (str[start] != str[end])
//		{
//			return false;
//		}
//
//		start++;
//		end--;
//	}
//
//	return true;
//}