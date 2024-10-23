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
//	//resize()�� �̿��� �����ص� ������ ���̸� �缳��
//	List.resize(N + 1);
//	visitedList.resize(N + 1);
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//
//		//s�� e�� ���� ����Ǿ� �ֱ� ������ �����ư��鼭 ���� �־��־���Ѵ�.
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