//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	int count = 0;
//	int endTime = 0;
//	vector<pair<int, int>> A(N);
//
//	//���� �ð��� �������� �������ϱ� ���� first�� �ִ´�.(����ð��� ª�� ������ Ž���ϱ� ����.)
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i].second;
//		cin >> A[i].first;
//	}
//
//	sort(A.begin(), A.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		//���۽ð��� ����ð��� ���Ѵ�. �̹� ������ �� �Ķ�, ���� ����ð����� ���� ���� ����� ���۽ð��� Ž���ȴ�.
//		if (A[i].second >= endTime)
//		{
//			endTime = A[i].first;
//			count++;
//		}
//	}
//
//	cout << count;
//}