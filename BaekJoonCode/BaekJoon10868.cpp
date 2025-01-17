//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <limits.h>
//
//using namespace std;
//
//// 세그먼트 트리의 데이터를 저장할 벡터
//vector<long> tree;
//
//// 구간 [a, b]에서 최소값을 구하는 함수
//long GetMin(int a, int b)
//{
//	long minValue = LONG_MAX;  // 최소값을 저장할 변수, 초기값은 최대값으로 설정
//
//	// a가 b보다 작거나 같은 동안 루프 실행
//	while (a <= b)
//	{
//		// a가 홀수일 경우 (세그먼트 트리의 오른쪽 자식 노드)
//		if (a % 2 == 1)
//		{
//			minValue = min(minValue, tree[a]);  // 최소값을 갱신
//			a++;  // a를 오른쪽 자식 노드로 이동
//		}
//
//		// a를 부모 노드로 이동
//		a /= 2;
//
//		// b가 짝수일 경우 (세그먼트 트리의 왼쪽 자식 노드)
//		if (b % 2 == 0)
//		{
//			minValue = min(minValue, tree[b]);  // 최소값을 갱신
//			b--;  // b를 왼쪽 자식 노드로 이동
//		}
//
//		// b를 부모 노드로 이동
//		b /= 2;
//	}
//
//	return minValue;  // 구한 최소값 반환
//}
//
//// 세그먼트 트리를 구축하는 함수
//void SetTree(int i)
//{
//	// 트리의 루트까지 거슬러 올라가며 트리를 갱신
//	while (i != 1)
//	{
//		// 부모 노드의 값이 자식 노드의 값보다 크면 부모 노드를 자식 값으로 갱신
//		if (tree[i / 2] > tree[i])
//		{
//			tree[i / 2] = tree[i];
//		}
//		i--;  // 부모 노드로 이동
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	int treeHeight = 0;
//	int length = N;
//
//	// 트리의 높이를 계산 (N이 2의 거듭제곱이 아니므로, 트리의 높이를 계산하는 과정)
//	while (length != 0)
//	{
//		length /= 2;
//		treeHeight++;
//	}
//
//	// 트리 크기 계산 (완전 이진 트리로 만들기 위한 크기)
//	int treeSize = int(pow(2, treeHeight + 1));
//	int leftNodeStartIndex = treeSize / 2 - 1;  // 왼쪽 자식 노드가 시작되는 인덱스
//
//	// 트리 벡터 크기 설정
//	tree.resize(treeSize + 1);
//	fill(tree.begin(), tree.end(), LONG_MAX);  // 트리의 초기 값은 모두 LONG_MAX로 설정
//
//	// 입력 값으로 트리의 리프 노드 부분을 채움
//	for (int i = leftNodeStartIndex + 1; i <= leftNodeStartIndex + N; i++)
//	{
//		cin >> tree[i];
//	}
//
//	// 세그먼트 트리를 구성
//	SetTree(treeSize - 1);
//
//	// 쿼리 처리
//	for (int i = 0; i < M; i++)
//	{
//		long s, e;
//		cin >> s >> e;  // 쿼리: 구간 [s, e]에서 최소값을 구하기
//
//		// 입력된 구간을 트리 인덱스로 변환
//		s += leftNodeStartIndex;
//		e += leftNodeStartIndex;
//
//		cout << GetMin(s, e) << "\n";
//	}
//}