#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;  // N: 노드(사람) 수, M: 간선(친분 관계) 수
	long mDistance[101][101];  // 사람들 간의 거리(친밀도) 저장 배열 (최대 100명)

	cin >> N >> M;

	// 초기 거리 배열을 설정
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
			{
				mDistance[i][j] = 0;  // 자기 자신과의 거리는 0
			}
			else
			{
				mDistance[i][j] = 100000001;  // 다른 사람과의 거리는 무한히 멀다고 설정 (최대값보다 큰 값)
			}
		}
	}

	// 관계가 주어지면 그 관계에 대해 거리를 1로 설정
	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;  // 사람 s와 e는 친밀도 1로 설정
		mDistance[s][e] = 1;
		mDistance[e][s] = 1;  // 양방향 관계이므로 e와 s의 거리도 1로 설정
	}

	// 플로이드-와샬 알고리즘 수행: 모든 쌍의 최단 거리 계산
	for (int k = 1; k <= N; k++)  // 중간 노드 k
	{
		for (int i = 1; i <= N; i++)  // 출발 노드 i
		{
			for (int j = 1; j <= N; j++)  // 도착 노드 j
			{
				// i에서 j로 가는 경로가 i->k와 k->j를 거치는 것보다 더 짧으면 거리 갱신
				if (mDistance[i][j] > mDistance[i][k] + mDistance[k][j])
				{
					mDistance[i][j] = mDistance[i][k] + mDistance[k][j];
				}
			}
		}
	}

	int min = INT_MAX;  // 최소 거리 합을 저장할 변수 (가장 친밀한 사람을 찾을 예정)
	int answer = -1;  // 가장 친밀한 사람의 번호

	// 각 사람에 대해 그 사람과 모든 사람 간의 거리 합을 계산
	for (int i = 1; i <= N; i++)
	{
		int temp = 0;  // 사람 i와 모든 사람과의 거리 합
		for (int j = 1; j <= N; j++)
		{
			temp += mDistance[i][j];  // 거리 합 계산
		}

		// 거리 합이 더 작은 사람이 있으면 그 사람으로 갱신
		if (min > temp)
		{
			min = temp;
			answer = i;
		}
	}

	cout << answer;
}