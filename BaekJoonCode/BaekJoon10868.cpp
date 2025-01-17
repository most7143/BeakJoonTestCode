//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <limits.h>
//
//using namespace std;
//
//// ���׸�Ʈ Ʈ���� �����͸� ������ ����
//vector<long> tree;
//
//// ���� [a, b]���� �ּҰ��� ���ϴ� �Լ�
//long GetMin(int a, int b)
//{
//	long minValue = LONG_MAX;  // �ּҰ��� ������ ����, �ʱⰪ�� �ִ밪���� ����
//
//	// a�� b���� �۰ų� ���� ���� ���� ����
//	while (a <= b)
//	{
//		// a�� Ȧ���� ��� (���׸�Ʈ Ʈ���� ������ �ڽ� ���)
//		if (a % 2 == 1)
//		{
//			minValue = min(minValue, tree[a]);  // �ּҰ��� ����
//			a++;  // a�� ������ �ڽ� ���� �̵�
//		}
//
//		// a�� �θ� ���� �̵�
//		a /= 2;
//
//		// b�� ¦���� ��� (���׸�Ʈ Ʈ���� ���� �ڽ� ���)
//		if (b % 2 == 0)
//		{
//			minValue = min(minValue, tree[b]);  // �ּҰ��� ����
//			b--;  // b�� ���� �ڽ� ���� �̵�
//		}
//
//		// b�� �θ� ���� �̵�
//		b /= 2;
//	}
//
//	return minValue;  // ���� �ּҰ� ��ȯ
//}
//
//// ���׸�Ʈ Ʈ���� �����ϴ� �Լ�
//void SetTree(int i)
//{
//	// Ʈ���� ��Ʈ���� �Ž��� �ö󰡸� Ʈ���� ����
//	while (i != 1)
//	{
//		// �θ� ����� ���� �ڽ� ����� ������ ũ�� �θ� ��带 �ڽ� ������ ����
//		if (tree[i / 2] > tree[i])
//		{
//			tree[i / 2] = tree[i];
//		}
//		i--;  // �θ� ���� �̵�
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
//	// Ʈ���� ���̸� ��� (N�� 2�� �ŵ������� �ƴϹǷ�, Ʈ���� ���̸� ����ϴ� ����)
//	while (length != 0)
//	{
//		length /= 2;
//		treeHeight++;
//	}
//
//	// Ʈ�� ũ�� ��� (���� ���� Ʈ���� ����� ���� ũ��)
//	int treeSize = int(pow(2, treeHeight + 1));
//	int leftNodeStartIndex = treeSize / 2 - 1;  // ���� �ڽ� ��尡 ���۵Ǵ� �ε���
//
//	// Ʈ�� ���� ũ�� ����
//	tree.resize(treeSize + 1);
//	fill(tree.begin(), tree.end(), LONG_MAX);  // Ʈ���� �ʱ� ���� ��� LONG_MAX�� ����
//
//	// �Է� ������ Ʈ���� ���� ��� �κ��� ä��
//	for (int i = leftNodeStartIndex + 1; i <= leftNodeStartIndex + N; i++)
//	{
//		cin >> tree[i];
//	}
//
//	// ���׸�Ʈ Ʈ���� ����
//	SetTree(treeSize - 1);
//
//	// ���� ó��
//	for (int i = 0; i < M; i++)
//	{
//		long s, e;
//		cin >> s >> e;  // ����: ���� [s, e]���� �ּҰ��� ���ϱ�
//
//		// �Էµ� ������ Ʈ�� �ε����� ��ȯ
//		s += leftNodeStartIndex;
//		e += leftNodeStartIndex;
//
//		cout << GetMin(s, e) << "\n";
//	}
//}