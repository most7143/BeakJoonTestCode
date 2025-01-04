//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N; // 노드의 수
//	long mDistance[101][101]; // 2차원 배열을 선언, 최대 101개의 노드에 대한 거리 정보
//
//	cin >> N;
//
//	// 입력받은 인접 행렬을 mDistance에 저장
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> mDistance[i][j]; // mDistance[i][j]는 i와 j 사이에 경로가 있으면 1, 없으면 0
//		}
//	}
//
//	// 플로이드 워셜 알고리즘을 이용하여 모든 노드 간 경로를 계산
//	for (int k = 0; k < N; k++) // 중간 경유지로 고려할 노드 k
//	{
//		for (int i = 0; i < N; i++) // 출발 노드 i
//		{
//			for (int j = 0; j < N; j++) // 도착 노드 j
//			{
//				// 경로 i -> k, k -> j가 존재하면 i -> j도 연결된 것으로 간주
//				if (mDistance[i][k] == 1 && mDistance[k][j] == 1)
//				{
//					mDistance[i][j] = 1; // i에서 j로 가는 경로가 존재한다는 의미로 1로 설정
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << mDistance[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}