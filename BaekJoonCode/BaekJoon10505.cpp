//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//vector<long> tree;
//const int MOD = 1000000007;
//
//// 구간 곱을 계산하는 함수 (s에서 e까지)
//long GetMul(int s, int e)
//{
//	long partMul = 1; // 곱셈 결과를 저장할 변수
//
//	// s와 e가 동일할 때까지 반복 (구간이 끝날 때까지)
//	while (s <= e)
//	{
//		// s가 홀수인 경우, 왼쪽 자식 노드를 곱해주고 s를 한 칸 오른쪽으로 이동
//		if (s % 2 == 1)
//		{
//			partMul = (partMul * tree[s]) % MOD;
//			s++;
//		}
//
//		// e가 짝수인 경우, 오른쪽 자식 노드를 곱해주고 e를 한 칸 왼쪽으로 이동
//		if (e % 2 == 0)
//		{
//			partMul = (partMul * tree[e]) % MOD;
//			e--;
//		}
//
//		// s와 e를 부모 노드로 올라가면서 갱신
//		s /= 2;
//		e /= 2;
//	}
//
//	return partMul; // 구간 곱 반환
//}
//
//// 세그먼트 트리에서 특정 인덱스의 값을 변경하는 함수
//void ChangeVal(int index, long val)
//{
//	// 트리에서 해당 인덱스 값을 새로 변경
//	tree[index] = val;
//
//	// 부모 노드를 갱신
//	while (index > 1)
//	{
//		index /= 2;
//		// 부모 노드는 자식 노드들의 곱으로 갱신
//		tree[index] = (tree[2 * index] * tree[2 * index + 1]) % MOD;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M, K;
//	cin >> N >> M >> K;
//
//	// 세그먼트 트리의 높이를 계산
//	int treeHeight = 0;
//	int length = N;
//	while (length != 0)
//	{
//		length /= 2;  // 2로 계속 나누면서 트리의 높이를 구함
//		treeHeight++;
//	}
//
//	// 세그먼트 트리의 크기 계산 (2^(treeHeight + 1)) 크기의 트리 배열을 만든다
//	int treeSize = int(pow(2, treeHeight + 1));
//	// 트리의 리프 노드 시작 인덱스를 계산
//	int leftNodeStartIndex = treeSize / 2;
//	// 세그먼트 트리 배열을 크기만큼 할당
//	tree.resize(treeSize);
//
//	// 트리 초기화 (세그먼트 트리의 기본값을 1로 설정)
//	fill(tree.begin(), tree.end(), 1);
//
//	// 리프 노드에 초기 값을 입력받음
//	for (int i = 0; i < N; i++)
//	{
//		cin >> tree[leftNodeStartIndex + i];  // 리프 노드에 값을 채움
//	}
//
//	// 리프 노드를 기반으로 부모 노드들을 갱신
//	for (int i = leftNodeStartIndex - 1; i >= 1; i--)
//	{
//		// 부모 노드는 자식들의 곱으로 갱신
//		tree[i] = (tree[2 * i] * tree[2 * i + 1]) % MOD;
//	}
//
//	// 쿼리 처리
//	for (int i = 0; i < M + K; i++)
//	{
//		long a, s, e;
//		cin >> a >> s >> e;
//
//		// 쿼리 종류가 1이면 값을 변경하는 연산
//		if (a == 1)
//		{
//			// ChangeVal은 1-based 인덱스이므로 s-1을 더하여 0-based로 변환
//			ChangeVal(leftNodeStartIndex + s - 1, e);
//		}
//		// 쿼리 종류가 2이면 구간 곱을 구하는 연산
//		else if (a == 2)
//		{
//			// 구간에 대한 인덱스를 0-based로 변환하여 GetMul 함수 호출
//			s += leftNodeStartIndex - 1;
//			e += leftNodeStartIndex - 1;
//			cout << GetMul(s, e) << "\n";
//		}
//	}
//
//	return 0;
//}