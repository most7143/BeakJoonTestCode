//#include<iostream>
//
//using namespace std;
//
//int N, Q;
//long F[21], S[21];
//bool Visited[21] = { false };
//
//int main()
//{
//	cin >> N >> Q;
//	F[0] = 1;
//
//	// 각 자리에서 만들 수 있는 경우의 수 계산 (팩토리얼 계산)
//	for (int i = 1; i <= N; i++)
//	{
//		F[i] = F[i - 1] * i;
//	}
//
//	if (Q == 1) // Q가 1이면 K번째 순열을 찾아 출력
//	{
//		long K;
//		cin >> K;
//
//		// 순열을 차례대로 계산ㄴ
//		for (int i = 1; i <= N; i++)
//		{
//			int cnt = 1; // cnt: 현재 자리에서 선택할 수 있는 숫자의 순서
//
//			for (int j = 1; j <= N; j++)
//			{
//				if (Visited[j])
//				{
//					continue;
//				}
//
//				// K가 현재 선택 가능한 범위 내에 있으면 해당 숫자를 선택
//				if (K <= cnt * F[N - i])
//				{
//					K -= ((cnt - 1) * F[N - i]); // K번째 순열 번호에서 이전 범위 차감
//					S[i] = j;
//					Visited[j] = true;
//					break;
//				}
//
//				cnt++; // cnt를 증가시켜 선택할 수 있는 숫자 순서대로 검사
//			}
//		}
//
//		for (int i = 1; i <= N; i++)
//		{
//			cout << S[i] << " ";
//		}
//	}
//	else // Q가 2이면 주어진 순열에 대한 번호를 계산
//	{
//		long K = 1;
//
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> S[i]; // 주어진 순열의 i번째 숫자
//
//			long cnt = 0; // 현재 자리에서 작은 숫자들의 개수를 셈
//
//			for (int j = 1; j < S[i]; j++)
//			{
//				if (false == Visited[j])
//				{
//					cnt++; // S[i]보다 작은 숫자 중 아직 선택되지 않은 숫자 개수
//				}
//			}
//
//			K += cnt * F[N - i]; // 그 숫자들이 차지하는 순열 번호 추가
//			Visited[S[i]] = true;
//		}
//
//		cout << K << "\n";
//	}
//}