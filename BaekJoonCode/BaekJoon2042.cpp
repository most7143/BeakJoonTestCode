//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//// ���������� ���׸�Ʈ Ʈ�� �迭�� ����
//static vector<long> tree;
//
//// �־��� ���� (s, e) �� ���� ���� ���� ���ϴ� �Լ�
//long GetSum(int s, int e)
//{
//	long partSum = 0;
//
//	// s�� e�� ������ ������ �ݺ�
//	while (s <= e)
//	{
//		// s�� Ȧ���� ���, �ش� �ε����� ���Խ�Ű�� s�� �� ĭ ���������� �̵�
//		if (s % 2 == 1)
//		{
//			partSum += tree[s];
//			s++;
//		}
//
//		// e�� ¦���� ���, �ش� �ε����� ���Խ�Ű�� e�� �� ĭ �������� �̵�
//		if (e % 2 == 0)
//		{
//			partSum += tree[e];
//			e--;
//		}
//
//		// ������ ������ ������ �ö�
//		s /= 2;
//		e /= 2;
//	}
//
//	return partSum;
//}
//
//// index ��ġ�� ���� val�� �����ϴ� �Լ�
//void changeVal(int index, long val)
//{
//	// ���� ����(diff)�� ����
//	long diff = val - tree[index];
//
//	// �ش� �ε����� ������Ʈ�� ��, �θ� ������ ���̸� ����
//	while (index > 0)
//	{
//		tree[index] = tree[index] + diff;
//		index /= 2;
//	}
//}
//
//// ���׸�Ʈ Ʈ���� �ʱ�ȭ�ϴ� �Լ�
//void setTree(int i)
//{
//	// Ʈ���� ���� ��忡�� �θ� ���� ���� ����Ͽ� Ʈ���� ����
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
//	cin >> N >> M >> K; // N: ���� �迭�� ũ��, M: ���� ���� Ƚ��, K: �� ���� Ƚ��
//
//	int treeHeight = 0;
//	int length = N;
//
//	// Ʈ���� ���̸� ���. Ʈ���� ���̴� �迭 ũ���� �α�(base 2)
//	while (length != 0)
//	{
//		length /= 2;
//		treeHeight++;
//	}
//
//	// ���׸�Ʈ Ʈ���� ��ü ũ�⸦ ���. Ʈ���� ũ��� 2^(height+1)
//	int treeSize = int(pow(2, treeHeight + 1));
//	int leftNodeStartIndex = treeSize / 2 - 1; // Ʈ���� ���� ��� ���� �ε���
//	tree.resize(treeSize + 1); // Ʈ�� ũ�⸸ŭ ���͸� �Ҵ�
//
//	// �Է� ������ Ʈ���� ���� ���(���� �迭)�� �ʱ�ȭ
//	for (int i = leftNodeStartIndex + 1; i <= leftNodeStartIndex + N; i++)
//	{
//		cin >> tree[i];
//	}
//
//	// ���� ������ �θ� ������ ���׸�Ʈ Ʈ���� ����
//	setTree(treeSize - 1);
//
//	// M���� ���� ����� K���� �� ���ϴ� ������ ó��
//	for (int i = 0; i < M + K; i++)
//	{
//		long a, s, e;
//		cin >> a >> s >> e; // a: ���� ���� (1: �� ����, 2: ���� ��), s: ���� �ε���, e: ���� �ε���
//
//		if (a == 1)
//		{
//			// �� ���� ������ ���, �ε����� ���� ��� ��ġ�� �����Ͽ� ����
//			changeVal(leftNodeStartIndex + s, e);
//		}
//		else if (a == 2)
//		{
//			// ���� �� ������ ���, ���� �ε����� ���� �ε����� ���� ���� ��ȯ�Ͽ� ���� ���
//			s += leftNodeStartIndex;
//			e += leftNodeStartIndex;
//			cout << GetSum(s, e) << "\n";
//		}
//	}
//
//	return 0;
//}