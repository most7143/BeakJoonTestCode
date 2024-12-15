//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 유니온 파인드를 이용한다.
//
//static vector<int> Parent;
//
////대표 노드를 찾아 반환하는 함수 (재귀함수)
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
////대표 노드끼리 연결하는 함수
//void Union(int a, int b)
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
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//
//	cin >> n >> m;
//
//	int dosi[201][201];
//
//	//도시 연결 데이터 저장
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			cin >> dosi[i][j];
//	}
//
//	int route[1001];
//
//	//여행 도시 정보 저장
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> route[i];
//	}
//
//	Parent.resize(n + 1);
//
//	for (int i = 1; i <= n; i++)
//	{
//		Parent[i] = i;
//	}
//
//	//탐색 중 도시가 연결되어 있다면 유니온 실행
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			if (dosi[i][j] == 1)
//				Union(i, j);
//	}
//
//	//여행 계획 도시가 하나의 대표 도시로 연결되는지 확인
//	int index = Find(route[1]);
//	bool connect = true;
//
//	for (int i = 2; i <= m; i++)
//	{
//		if (index != Find(route[i]))
//		{
//			cout << "NO";
//			connect = false;
//			break;
//		}
//	}
//
//	if (connect)
//	{
//		cout << "YES";
//	}
//}