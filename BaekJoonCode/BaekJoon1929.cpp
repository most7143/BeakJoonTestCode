//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int M, N;
//
//	cin >> M >> N;
//
//	vector<int> A(N + 1, 0);
//
//	//2~N ������ vector�� ����� ���� �߰��Ѵ�.
//	for (int i = 2; i <= N; i++)
//	{
//		A[i] = i;
//	}
//
//	//i�� ����� N�� �����ٺ��� Ŭ �� ����.
//	for (int i = 2; i <= sqrt(N); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		//j�� �Լ��ؼ� ����� ���� �����.
//		for (int j = i * 2; j <= N; j += i)
//		{
//			A[j] = 0;
//		}
//	}
//
//	for (int i = M; i <= N; i++)
//	{
//		if (A[i] != 0)
//		{
//			cout << A[i] << "\n";
//		}
//	}
//}