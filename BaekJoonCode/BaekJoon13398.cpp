//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
////��ȭ���� �̿��� ���� �ذ�
////���ʰ� ������ �� �� ��ȭ���� ����Ѵ�.
//
//int N;
//vector<int> A, L, R;
//
//int main()
//{
//	cin >> N;
//
//	A.resize(N);
//	L.resize(N);
//	R.resize(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//
//	L[0] = A[0];
//
//	int result = L[0];
//
//	for (int i = 1; i < N; i++)
//	{
//		//���� A[i]�� ���� ���� ���� ���� �� ū�� �˻� �� L[i]�� �����Ѵ�.
//		L[i] = max(A[i], L[i - 1] + A[i]);
//
//		//���Ÿ� ���ϴ� ����϶���  �⺻ �ִ밪�� ����.
//		result = max(result, L[i]);
//	}
//
//	R[N - 1] = A[N - 1];
//
//	for (int i = N - 2; i >= 0; i--)
//	{
//		//���� A[i]�� ���� ���� ���� ���� �� ū�� �˻� �� R[i]�� �����Ѵ�.
//		R[i] = max(A[i], R[i + 1] + A[i]);
//	}
//
//	for (int i = 1; i < N - 1; i++)
//	{
//		//i��° ���� ���� �������� �ִ밪�� temp�� �ִ´�.
//		int temp = L[i - 1] + R[i + 1];
//
//		result = max(result, temp);
//	}
//
//	cout << result;
//}