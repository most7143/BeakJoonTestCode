//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//// 전역적으로 세그먼트 트리 배열을 선언
//static vector<long> tree;
//
//// 주어진 범위 (s, e) 에 대한 구간 합을 구하는 함수
//long GetSum(int s, int e)
//{
//	long partSum = 0;
//
//	// s와 e가 교차할 때까지 반복
//	while (s <= e)
//	{
//		// s가 홀수일 경우, 해당 인덱스를 포함시키고 s를 한 칸 오른쪽으로 이동
//		if (s % 2 == 1)
//		{
//			partSum += tree[s];
//			s++;
//		}
//
//		// e가 짝수일 경우, 해당 인덱스를 포함시키고 e를 한 칸 왼쪽으로 이동
//		if (e % 2 == 0)
//		{
//			partSum += tree[e];
//			e--;
//		}
//
//		// 구간을 반으로 나누어 올라감
//		s /= 2;
//		e /= 2;
//	}
//
//	return partSum;
//}
//
//// index 위치의 값을 val로 변경하는 함수
//void changeVal(int index, long val)
//{
//	// 값의 차이(diff)를 구함
//	long diff = val - tree[index];
//
//	// 해당 인덱스를 업데이트한 후, 부모 노드까지 차이를 전파
//	while (index > 0)
//	{
//		tree[index] = tree[index] + diff;
//		index /= 2;
//	}
//}
//
//// 세그먼트 트리를 초기화하는 함수
//void setTree(int i)
//{
//	// 트리의 리프 노드에서 부모 노드로 합을 계산하여 트리를 구축
//	while (i != 1)
//	{
//		tree[i / 2] += tree[i];
//		i--;
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
//	cin >> N >> M >> K; // N: 원본 배열의 크기, M: 갱신 연산 횟수, K: 합 쿼리 횟수
//
//	int treeHeight = 0;
//	int length = N;
//
//	// 트리의 높이를 계산. 트리의 높이는 배열 크기의 로그(base 2)
//	while (length != 0)
//	{
//		length /= 2;
//		treeHeight++;
//	}
//
//	// 세그먼트 트리의 전체 크기를 계산. 트리의 크기는 2^(height+1)
//	int treeSize = int(pow(2, treeHeight + 1));
//	int leftNodeStartIndex = treeSize / 2 - 1; // 트리의 리프 노드 시작 인덱스
//	tree.resize(treeSize + 1); // 트리 크기만큼 벡터를 할당
//
//	// 입력 값으로 트리의 리프 노드(원본 배열)를 초기화
//	for (int i = leftNodeStartIndex + 1; i <= leftNodeStartIndex + N; i++)
//	{
//		cin >> tree[i];
//	}
//
//	// 리프 노드부터 부모 노드까지 세그먼트 트리를 생성
//	setTree(treeSize - 1);
//
//	// M번의 갱신 연산과 K번의 합 구하는 연산을 처리
//	for (int i = 0; i < M + K; i++)
//	{
//		long a, s, e;
//		cin >> a >> s >> e; // a: 연산 종류 (1: 값 변경, 2: 구간 합), s: 시작 인덱스, e: 종료 인덱스
//
//		if (a == 1)
//		{
//			// 값 변경 연산인 경우, 인덱스는 리프 노드 위치로 조정하여 변경
//			changeVal(leftNodeStartIndex + s, e);
//		}
//		else if (a == 2)
//		{
//			// 구간 합 연산인 경우, 시작 인덱스와 종료 인덱스를 리프 노드로 변환하여 합을 계산
//			s += leftNodeStartIndex;
//			e += leftNodeStartIndex;
//			cout << GetSum(s, e) << "\n";
//		}
//	}
//
//	return 0;
//}