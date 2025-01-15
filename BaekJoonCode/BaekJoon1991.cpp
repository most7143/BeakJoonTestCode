//#include <iostream>
//
//using namespace std;
//
//// N: 노드의 개수
//// tree: 각 노드의 왼쪽, 오른쪽 자식 노드 저장 (크기는 26으로, A부터 Z까지의 노드를 지원)
//static int N;
//static int tree[26][2];
//
//// PreOrder 함수: 전위 순회 (현재 노드 -> 왼쪽 자식 -> 오른쪽 자식)
//void PreOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	// 현재 노드를 출력 (A = 0, B = 1, ..., Z = 25)
//	cout << (char)(now + 'A');  // 현재 노드의 문자를 출력
//	PreOrder(tree[now][0]);  // 왼쪽 자식으로 전위 순회
//	PreOrder(tree[now][1]);  // 오른쪽 자식으로 전위 순회
//}
//
//// InOrder 함수: 중위 순회 (왼쪽 자식 -> 현재 노드 -> 오른쪽 자식)
//void InOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	InOrder(tree[now][0]);  // 왼쪽 자식으로 중위 순회
//	cout << (char)(now + 'A');  // 현재 노드를 출력
//	InOrder(tree[now][1]);  // 오른쪽 자식으로 중위 순회
//}
//
//// PostOrder 함수: 후위 순회 (왼쪽 자식 -> 오른쪽 자식 -> 현재 노드)
//void PostOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	PostOrder(tree[now][0]);  // 왼쪽 자식으로 후위 순회
//	PostOrder(tree[now][1]);  // 오른쪽 자식으로 후위 순회
//	cout << (char)(now + 'A');  // 현재 노드를 출력
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	// 트리의 각 노드에 대한 정보를 입력
//	for (int i = 0; i < N; i++)
//	{
//		char node_char, left, right;
//		cin >> node_char >> left >> right;
//
//		int node = node_char - 'A';
//
//		// 왼쪽 자식 노드 설정
//		if (left == '.')
//		{
//			tree[node][0] = -1;
//		}
//		else
//		{
//			tree[node][0] = left - 'A';
//		}
//
//		// 오른쪽 자식 노드 설정
//		if (right == '.')
//		{
//			tree[node][1] = -1;
//		}
//		else
//		{
//			tree[node][1] = right - 'A';
//		}
//	}
//
//	// 전위 순회, 중위 순회, 후위 순회를 차례로 호출
//	// 루트 노드 (A)부터 시작
//	PreOrder(0);
//	cout << "\n";
//	InOrder(0);
//	cout << "\n";
//	PostOrder(0);
//}