//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//vector<long> tree;
//const int MOD = 1000000007;
//
//// ���� ���� ����ϴ� �Լ� (s���� e����)
//long GetMul(int s, int e)
//{
//	long partMul = 1; // ���� ����� ������ ����
//
//	// s�� e�� ������ ������ �ݺ� (������ ���� ������)
//	while (s <= e)
//	{
//		// s�� Ȧ���� ���, ���� �ڽ� ��带 �����ְ� s�� �� ĭ ���������� �̵�
//		if (s % 2 == 1)
//		{
//			partMul = (partMul * tree[s]) % MOD;
//			s++;
//		}
//
//		// e�� ¦���� ���, ������ �ڽ� ��带 �����ְ� e�� �� ĭ �������� �̵�
//		if (e % 2 == 0)
//		{
//			partMul = (partMul * tree[e]) % MOD;
//			e--;
//		}
//
//		// s�� e�� �θ� ���� �ö󰡸鼭 ����
//		s /= 2;
//		e /= 2;
//	}
//
//	return partMul; // ���� �� ��ȯ
//}
//
//// ���׸�Ʈ Ʈ������ Ư�� �ε����� ���� �����ϴ� �Լ�
//void ChangeVal(int index, long val)
//{
//	// Ʈ������ �ش� �ε��� ���� ���� ����
//	tree[index] = val;
//
//	// �θ� ��带 ����
//	while (index > 1)
//	{
//		index /= 2;
//		// �θ� ���� �ڽ� ������ ������ ����
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
//	// ���׸�Ʈ Ʈ���� ���̸� ���
//	int treeHeight = 0;
//	int length = N;
//	while (length != 0)
//	{
//		length /= 2;  // 2�� ��� �����鼭 Ʈ���� ���̸� ����
//		treeHeight++;
//	}
//
//	// ���׸�Ʈ Ʈ���� ũ�� ��� (2^(treeHeight + 1)) ũ���� Ʈ�� �迭�� �����
//	int treeSize = int(pow(2, treeHeight + 1));
//	// Ʈ���� ���� ��� ���� �ε����� ���
//	int leftNodeStartIndex = treeSize / 2;
//	// ���׸�Ʈ Ʈ�� �迭�� ũ�⸸ŭ �Ҵ�
//	tree.resize(treeSize);
//
//	// Ʈ�� �ʱ�ȭ (���׸�Ʈ Ʈ���� �⺻���� 1�� ����)
//	fill(tree.begin(), tree.end(), 1);
//
//	// ���� ��忡 �ʱ� ���� �Է¹���
//	for (int i = 0; i < N; i++)
//	{
//		cin >> tree[leftNodeStartIndex + i];  // ���� ��忡 ���� ä��
//	}
//
//	// ���� ��带 ������� �θ� ������ ����
//	for (int i = leftNodeStartIndex - 1; i >= 1; i--)
//	{
//		// �θ� ���� �ڽĵ��� ������ ����
//		tree[i] = (tree[2 * i] * tree[2 * i + 1]) % MOD;
//	}
//
//	// ���� ó��
//	for (int i = 0; i < M + K; i++)
//	{
//		long a, s, e;
//		cin >> a >> s >> e;
//
//		// ���� ������ 1�̸� ���� �����ϴ� ����
//		if (a == 1)
//		{
//			// ChangeVal�� 1-based �ε����̹Ƿ� s-1�� ���Ͽ� 0-based�� ��ȯ
//			ChangeVal(leftNodeStartIndex + s - 1, e);
//		}
//		// ���� ������ 2�̸� ���� ���� ���ϴ� ����
//		else if (a == 2)
//		{
//			// ������ ���� �ε����� 0-based�� ��ȯ�Ͽ� GetMul �Լ� ȣ��
//			s += leftNodeStartIndex - 1;
//			e += leftNodeStartIndex - 1;
//			cout << GetMul(s, e) << "\n";
//		}
//	}
//
//	return 0;
//}