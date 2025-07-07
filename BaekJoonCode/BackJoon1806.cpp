//#include <iostream>
//
//using namespace std;
//
//int N, S;
//int Arr[100001];
//
//int main()
//{
//	cin >> N >> S;
//
//	int start = 0;
//	int end = 0;
//	int minLength = N + 1;
//	int sum = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> Arr[i];
//	}
//
//	while (true)
//	{
//		//합이 S값보다 크거나 같은 경우 기존에 저장해두었던 최소길이와 비교하고, start 인덱스를 증가시킴(더 짧은 길이가 있는지 체크)
//		if (sum >= S)
//		{
//			minLength = min(minLength, end - start);
//			sum -= Arr[start];
//			start++;
//		}
//		else if (end == N)
//		{
//			break;
//		}
//		else
//		{
//			//합이 S값보다 작은경우 end 인덱스를 증가시킴
//			end++;
//			sum += Arr[end];
//		}
//	}
//
//	if (minLength == N + 1)
//	{
//		cout << 0;
//	}
//	else
//	{
//		//출력시 길이에 +1을 해야함
//		cout << minLength + 1;
//	}
//}