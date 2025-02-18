//#include<iostream>
//
//using namespace std;
//
//int M, K, T;
//
//int D[51];
//double Probability[51];
//double Ans = 0;
//
//int main()
//{
//	cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		cin >> D[i];
//		T += D[i]; //T에 조약돌의 총 갯수를 저장
//	}
//
//	cin >> K;
//
//	for (int i = 0; i < M; i++)
//	{
//		if (D[i] >= K) //K보다 D[i]의 조약돌 갯수가 많을떄만 처리
//		{
//			Probability[i] = 1.0; // 확률 초기화
//
//			for (int k = 0; k < K; k++)
//			{
//				//첫번째로 뽑을 확률 D[i] / T
//				//두번째 이후로는 남은 조약돌과, 선택된 조약돌의 수를 줄여야하기 떄문에 - k를 해주는 것
//				//각 확률을 게속 곱해줘야 한번에 뽑을 확률을 계산 할 수 있음
//				Probability[i] *= (double)(D[i] - k) / (T - k);
//			}
//		}
//		Ans += Probability[i];
//	}
//
//	cout << fixed;
//	cout.precision(9);
//	cout << Ans;
//}