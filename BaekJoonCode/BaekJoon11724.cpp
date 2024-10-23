//#include <iostream>
//#include <vector>
//using namespace std;
//
//static vector<vector<int>> List;
//
//static vector<bool> visitedList;
//
//void DFS(int v);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N = 0;
//	int M = 0;
//	int count = 0;
//	cin >> N >> M;
//
//	//resize()를 이용해 선언해둔 벡터의 길이를 재설정
//	List.resize(N + 1);
//	visitedList.resize(N + 1);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//
//		//s와 e가 서로 연결되어 있기 때문에 번갈아가면서 값을 넣어주어야한다.
//		List[s].push_back(e);
//		List[e].push_back(s);
//	}
//
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (false == visitedList[i])
//		{
//			count++;
//			DFS(i);
//		}
//	}
//
//	cout << count;
//}
//
//void DFS(int v)
//{
//	if (visitedList[v])
//	{
//		return;
//	}
//
//	visitedList[v] = true;
//
//	for (int i : List[v])
//	{
//		if (false == visitedList[i])
//		{
//			DFS(i);
//		}
//	}
//}