//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N;
//
//	vector<int> A;
//	vector<int> B;
//
//	A.resize(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//
//	cin >> M;
//
//	B.resize(M);
//
//	for (int i = 0; i < M; i++)
//	{
//		cin >> B[i];
//	}
//
//	sort(A.begin(), A.end());
//
//	for (int i = 0; i < M; i++)
//	{
//		bool find = false;
//		int target = B[i];
//		int start = 0;
//		int end = A.size() - 1;
//
//		//이진 탐색 로직 시작
//		while (start <= end)
//		{
//			int mid = (start + end) / 2;
//			int midValue = A[mid];
//
//			//타겟이 더 큰 경우 왼쪽 절반을 자른다(중간 값보다 클 순 없다)
//			if (midValue > target)
//			{
//				end = mid - 1;
//			}
//			//타겟이 작은 경우 오른쪽 절반을 자른다(중간 값보다 작을 순 없다)
//			else if (midValue < target)
//			{
//				start = mid + 1;
//			}
//			else
//			{
//				find = true;
//				break;
//			}
//		}
//
//		if (find)
//		{
//			cout << "1" << "\n";
//		}
//		else
//		{
//			cout << "0" << "\n";
//		}
//	}
//}