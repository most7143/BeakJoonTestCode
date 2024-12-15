//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////대표 노드 저장 배열
//static vector<int> Parent;
//
////진실을 아는 사람 배열
//static vector<int> TruePeople;
//
////파티 정보 배열
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
//	// N = 사람 수 , M = 파티 개수 , T = 진실을 아는 사람 수
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
//	//실제 구현 구간
//
//	//유니온 파인트를 이용해 각 파티에 참여한 사람을 1개의 그룹으로 만들기
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
//	// 각 파티의 내표노드와 진실을 아는 사람의 대표노드가 같으면 과장되게 이야기할 수 없음
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