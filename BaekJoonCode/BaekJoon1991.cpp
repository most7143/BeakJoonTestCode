//#include <iostream>
//
//using namespace std;
//
//// N: ����� ����
//// tree: �� ����� ����, ������ �ڽ� ��� ���� (ũ��� 26����, A���� Z������ ��带 ����)
//static int N;
//static int tree[26][2];
//
//// PreOrder �Լ�: ���� ��ȸ (���� ��� -> ���� �ڽ� -> ������ �ڽ�)
//void PreOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	// ���� ��带 ��� (A = 0, B = 1, ..., Z = 25)
//	cout << (char)(now + 'A');  // ���� ����� ���ڸ� ���
//	PreOrder(tree[now][0]);  // ���� �ڽ����� ���� ��ȸ
//	PreOrder(tree[now][1]);  // ������ �ڽ����� ���� ��ȸ
//}
//
//// InOrder �Լ�: ���� ��ȸ (���� �ڽ� -> ���� ��� -> ������ �ڽ�)
//void InOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	InOrder(tree[now][0]);  // ���� �ڽ����� ���� ��ȸ
//	cout << (char)(now + 'A');  // ���� ��带 ���
//	InOrder(tree[now][1]);  // ������ �ڽ����� ���� ��ȸ
//}
//
//// PostOrder �Լ�: ���� ��ȸ (���� �ڽ� -> ������ �ڽ� -> ���� ���)
//void PostOrder(int now)
//{
//	if (now == -1)
//		return;
//
//	PostOrder(tree[now][0]);  // ���� �ڽ����� ���� ��ȸ
//	PostOrder(tree[now][1]);  // ������ �ڽ����� ���� ��ȸ
//	cout << (char)(now + 'A');  // ���� ��带 ���
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
//	// Ʈ���� �� ��忡 ���� ������ �Է�
//	for (int i = 0; i < N; i++)
//	{
//		char node_char, left, right;
//		cin >> node_char >> left >> right;
//
//		int node = node_char - 'A';
//
//		// ���� �ڽ� ��� ����
//		if (left == '.')
//		{
//			tree[node][0] = -1;
//		}
//		else
//		{
//			tree[node][0] = left - 'A';
//		}
//
//		// ������ �ڽ� ��� ����
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
//	// ���� ��ȸ, ���� ��ȸ, ���� ��ȸ�� ���ʷ� ȣ��
//	// ��Ʈ ��� (A)���� ����
//	PreOrder(0);
//	cout << "\n";
//	InOrder(0);
//	cout << "\n";
//	PostOrder(0);
//}