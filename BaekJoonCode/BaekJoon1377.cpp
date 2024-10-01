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
//	//정렬전 인덱스와 정렬 후 인덱스를 비교하기 위해서 first에는 결과값, second에는 인덱스를 넣는다.
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
//	//정렬전 인덱스 - 정렬 후 인덱스를 하게 되면 swap()을 하는 이동거리가 나오게된다.
//	//최대 이동거리 == 한번도 swap이 일어나지 않는 횟수
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