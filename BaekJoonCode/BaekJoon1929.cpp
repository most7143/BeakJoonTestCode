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
//	//2~N 까지의 vector를 만들고 값을 추가한다.
//	for (int i = 2; i <= N; i++)
//	{
//		A[i] = i;
//	}
//
//	//i의 배수가 N의 제곱근보다 클 수 없다.
//	for (int i = 2; i <= sqrt(N); i++)
//	{
//		if (A[i] == 0)
//		{
//			continue;
//		}
//
//		//j에 게속해서 배수를 더해 지운다.
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