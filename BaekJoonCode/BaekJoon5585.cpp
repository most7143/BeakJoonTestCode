//#include <iostream>
//
//using namespace std;
//
////높은 순서대로 코인을 계산하기 위해 배열로 묶음
//int coin[6] = { 500,100,50,10,5,1 };
//
//int main()
//{
//	int n;
//
//	int result = 0;
//	cin >> n;
//
//	//거스름돈 값 계산
//	n = 1000 - n;
//
//	for (int i = 0; i < 6; i++)
//	{
//		if (coin[i] <= n)
//		{
//			//i번째 코인을 나누어 몫(코인갯수)을 저장
//			result += n / coin[i];
//
//			//거스름돈을 업데이트 한다.
//			n %= coin[i];
//		}
//	}
//
//	cout << result;
//}