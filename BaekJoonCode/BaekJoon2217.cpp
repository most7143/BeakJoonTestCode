//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n;
//int minRope = 0; //���ø� ���� �� �ּ� �߷�
//int sum = 0; // ���ø� �������� �ִ� �߷�
//vector<int> A;
//
//int main()
//{
//	cin >> n;
//
//	int result = 10000;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//
//		cin >> a;
//
//		A.push_back(a);
//	}
//
//	if (n == 1)
//	{
//		cout << A[0];
//	}
//	else
//	{
//		//�������� ����
//		sort(A.rbegin(), A.rend());
//
//		minRope = A[0];
//
//		int result = 0;
//
//		for (int i = 1; i < n; i++)
//		{
//			if (minRope > A[i])
//			{
//				minRope = A[i];
//			}
//
//			//i+1 = ���� ����� ������ ��, �ּ� ���� ���Կ� ������ �� �� �ִ� ���Ը� ���
//			sum = minRope * (i + 1);
//
//			if (result < sum)
//			{
//				result = sum;
//			}
//		}
//
//		cout << result;
//	}
//}