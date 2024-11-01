//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	const int MaxSize = 10000001;
//
//	long min, max;
//
//	cin >> min >> max;
//
//	//�迭�� ũ�Ⱑ Ŀ ���� �Ҵ�.
//	long* A = new long[MaxSize];
//
//	for (int i = 2; i < MaxSize; i++)
//	{
//		A[i] = i;
//	}
//
//	//i�� MaxSize�� �������� ���� �ʴ´�.
//	for (int i = 2; i <= sqrt(MaxSize); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		//j �������� i�� ���� ����� �Լ� ���������� �Ѵ�.
//		for (int j = i * 2; j < MaxSize; j += i)
//		{
//			A[j] = 0;
//		}
//	}
//
//	int count = 0;
//
//	for (int i = 2; i < MaxSize; i++)
//	{
//		if (A[i] != 0)
//		{
//			long temp = A[i];
//
//
//			//���� ǥ�� ���� �ʰ� ������ ���� ���� double�� ���� �� ������ ó��
//			while ((double)A[i] <= (double)max / (double)temp)
//			{
//				if ((double)A[i] >= (double)min / (double)temp)
//				{
//					count++;
//				}
//
//				temp *= A[i];
//			}
//		}
//	}
//
//	cout << count;
//
//	delete[] A; // ���� �޸� ����
//}