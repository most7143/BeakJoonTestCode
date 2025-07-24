//#include <iostream>
//
//using namespace std;
//
//int N, M;
//
//int main()
//{
//	cin >> N >> M;
//
//	int minSixPrice = 1000;
//	int minOncePrice = 1000;
//	int six, one;
//	int reuslt = 0;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> six >> one;
//
//		if (six < minSixPrice)
//		{
//			minSixPrice = six;
//		}
//
//		if (one < minOncePrice)
//		{
//			minOncePrice = one;
//		}
//	}
//
//	int onlySix = ((N + 5) / 6) * minSixPrice;
//	int onlyOne = N * minOncePrice;
//	int mixed = (N / 6) * minSixPrice + (N % 6) * minOncePrice;
//
//	int result = min(onlySix, min(onlyOne, mixed));
//
//	cout << result;
//}