//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	long min, max;
//
//	cin >> min >> max;
//
//	//min과 max의 길이만큼 vector를 설정
//	vector<bool> check(max - min + 1);
//
//	int count = 0;
//
//	//첫번째 for문은 제곱수만큼 돌아가도록 설정.
//	for (long i = 2; i * i <= max; i++)
//	{
//		//현재 제곱수
//		long pow = i * i;
//
//		//제곱수가 처음 등장하는 위치를 min/pow로 가져온다.
//		//다만, 처음에 등장하는 값이 배수가 아닐 수도 있기 떄문에 아니라면 +1을 해 맞춘다.
//		long startIndex = min / pow;
//
//		if (min % pow != 0)
//		{
//			startIndex++;
//		}
//
//		for (long j = startIndex; pow * j <= max; j++)
//		{
//			//현재 위치 계산. 배열은 0 부터시작하기에 -min을 해줘야 제대로 된 위치를 가져온다.
//			int index = (int)(pow * j) - min;
//
//			check[index] = true;
//		}
//	}
//
//	for (int i = 0; i < check.size(); i++)
//	{
//		if (false == check[i])
//		{
//			count++;
//		}
//	}
//
//	cout << count;
//}