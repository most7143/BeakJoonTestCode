//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N = 0;
//	cin >> N;
//
//	vector<pair<int, int>> A(N);
//
//	int max = 0;
//
//	//������ �ε����� ���� �� �ε����� ���ϱ� ���ؼ� first���� �����, second���� �ε����� �ִ´�.
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i].first;
//
//		A[i].second = i;
//	}
//
//	sort(A.begin(), A.end());
//
//
//	//������ �ε��� - ���� �� �ε����� �ϰ� �Ǹ� swap()�� �ϴ� �̵��Ÿ��� �����Եȴ�.
//	//�ִ� �̵��Ÿ� == �ѹ��� swap�� �Ͼ�� �ʴ� Ƚ��
//	for (int i = 0; i < N; i++)
//	{
//		if (max < A[i].second - i)
//		{
//			max = A[i].second - i;
//		}
//	}
//
//	cout << max + 1;
//}