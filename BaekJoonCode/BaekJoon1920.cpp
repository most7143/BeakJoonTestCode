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
//		//���� Ž�� ���� ����
//		while (start <= end)
//		{
//			int mid = (start + end) / 2;
//			int midValue = A[mid];
//
//			//Ÿ���� �� ū ��� ���� ������ �ڸ���(�߰� ������ Ŭ �� ����)
//			if (midValue > target)
//			{
//				end = mid - 1;
//			}
//			//Ÿ���� ���� ��� ������ ������ �ڸ���(�߰� ������ ���� �� ����)
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