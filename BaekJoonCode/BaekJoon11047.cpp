//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N, K;
//
//	cin >> N >> K;
//
//	vector<int> A(N);
//
//	int count = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//
//	//������ ������ ū ������ �񱳸� �Ѵ�.
//	for (int i = N - 1; i >= 0; i--)
//	{
//		//���� ������ ������, ��ǥ�ݾ�(K)���� �۰ų� ���ٸ� �ش� ���� ����� ���� ���� ������ ����
//		if (A[i] <= K)
//		{
//			count += K / A[i];
//			K = K % A[i];
//		}
//
//		if (K == 0)
//		{
//			break;
//		}
//	}
//
//	cout << count;
//}