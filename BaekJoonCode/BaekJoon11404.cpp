#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	long mDistance[101][101];  // 최단 거리를 저장하는 2D 배열 (최대 101x101 크기)

	cin >> N >> M;

	// 초기 거리 설정 (최대값으로 초기화)
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)  // 자기 자신에게 가는 거리는 0
			{
				mDistance[i][j] = 0;
			}
			else  // 다른 정점으로 가는 거리는 매우 큰 값으로 설정
			{
				mDistance[i][j] = 10000001;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;  // 간선 (s -> e) 의 가중치 v 입력 받기
		if (mDistance[s][e] > v)  // 간선에 여러 가중치가 있을 수 있으므로 최소 가중치로 갱신
		{
			mDistance[s][e] = v;
		}
	}

	// 플로이드-와샬 알고리즘
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			for (int k = 1; k <= N; k++)
			{
				// j -> k의 최단 거리가 j -> i와 i -> k를 거친 경로보다 길다면 갱신
				if (mDistance[j][k] > mDistance[j][i] + mDistance[i][k])
				{
					mDistance[j][k] = mDistance[j][i] + mDistance[i][k];
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (mDistance[i][j] == 10000001)
			{
				cout << "0 ";
			}
			else
			{
				cout << mDistance[i][j] << " ";
			}
		}
		cout << "\n";
	}
}