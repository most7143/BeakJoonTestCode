//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////��ǥ ��� ���� �迭
//static vector<int> Parent;
//
////������ �ƴ� ��� �迭
//static vector<int> TruePeople;
//
////��Ƽ ���� �迭
//static vector<vector<int>> Party;
//
//static int Result;
//
//int Find(int a)
//{
//	if (a == Parent[a])
//	{
//		return a;
//	}
//	else
//	{
//		return Parent[a] = Find(Parent[a]);
//	}
//}
//
//void UnionFind(int a, int b)
//{
//	a = Find(a);
//	b = Find(b);
//
//	if (a != b)
//	{
//		Parent[b] = a;
//	}
//}
//
//int main()
//{
//	// N = ��� �� , M = ��Ƽ ���� , T = ������ �ƴ� ��� ��
//	int N, M, T;
//
//	cin >> N >> M >> T;
//
//	TruePeople.resize(T);
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> TruePeople[i];
//	}
//
//	Party.resize(M);
//
//	for (int i = 0; i < M; i++)
//	{
//		int size;
//		cin >> size;
//
//		for (int j = 0; j < size; j++)
//		{
//			int temp;
//			cin >> temp;
//			Party[i].push_back(temp);
//		}
//	}
//
//	Parent.resize(N + 1);
//
//	for (int i = 0; i <= N; i++)
//	{
//		Parent[i] = i;
//	}
//
//	//���� ���� ����
//
//	//���Ͽ� ����Ʈ�� �̿��� �� ��Ƽ�� ������ ����� 1���� �׷����� �����
//	for (int i = 0; i < M; i++)
//	{
//		int firstPeople = Party[i][0];
//
//		for (int j = 0; j < Party[i].size(); j++)
//		{
//			UnionFind(firstPeople, Party[i][j]);
//		}
//	}
//
//	// �� ��Ƽ�� ��ǥ���� ������ �ƴ� ����� ��ǥ��尡 ������ ����ǰ� �̾߱��� �� ����
//	for (int i = 0; i < M; i++)
//	{
//		bool isPossible = true;
//
//		int current = Party[i][0];
//
//		for (int j = 0; j < T; j++)
//		{
//			if (Find(current) == Find(TruePeople[j]))
//			{
//				isPossible = false;
//				break;
//			}
//		}
//
//		if (isPossible)
//		{
//			Result++;
//		}
//	}
//
//	cout << Result;
//}