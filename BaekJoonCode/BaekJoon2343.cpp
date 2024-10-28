//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//
//	cin >> N >> M;
//
//	vector<int> A(N, 0);
//	int start = 0;
//	int end = 0;
//
//	//���� Ž���� ������ �����ϱ� ���� start��, end�� ���� ���
//	//start: A�� �迭�� ���� ū������ ����(�׷��� ��� ��Ҹ� ������ �� �ִ�.)
//	//end: ��� �迭�� ������ ����(��� �迭�� ���� ������ �Ѿ �� ����.)
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//
//		if (start < A[i])
//		{
//			start = A[i];
//		}
//
//		end += A[i];
//	}
//
//	while (start <= end)
//	{
//		int mid = (start + end) / 2;
//		int sum = 0;
//		int count = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (sum + A[i] > mid)
//			{
//				count++;
//				sum = 0;
//			}
//
//			sum += A[i];
//		}
//
//		if (sum != 0)
//		{
//			count++;
//		}
//
//		if (count > M)
//		{
//			start = mid + 1;
//		}
//		else
//		{
//			end = mid - 1;
//		}
//	}
//
//	cout << start;
//}