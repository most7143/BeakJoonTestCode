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
//	//동전의 가격이 큰 순부터 비교를 한다.
//	for (int i = N - 1; i >= 0; i--)
//	{
//		//만약 동전의 가격이, 목표금액(K)보다 작거나 같다면 해당 수를 나누어서 사용된 동전 갯수를 저장
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