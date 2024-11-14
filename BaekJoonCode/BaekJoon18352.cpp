//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
////����ġ�� ���� ��� vector�� �̿��� ������ ���ͷ� ����
//vector<vector<int>> A;
//
////�̵� �Ÿ��� Ȯ���ϱ� ���� bool�ƴ� int�� ����
//vector<int> Visited;
//
//vector<int> Answer;
//
//void BFS(int node)
//{
//	queue<int> myque;
//	myque.push(node);
//	Visited[node]++;
//
//	while (false == myque.empty())
//	{
//		int now = myque.front();
//		myque.pop();
//
//		for (int i : A[now])
//		{
//			if (Visited[i] == -1)
//			{
//				Visited[i] = Visited[now] + 1;
//				myque.push(i);
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long n, m, k, x;
//
//	cin >> n >> m >> k >> x;
//
//	A.resize(n + 1);
//	Visited.resize(n + 1, -1);
//
//	//�׷��� ���� �κ�
//	for (int i = 0; i < m; i++)
//	{
//		int s, e;
//		cin >> s >> e;
//
//		A[s].push_back(e);
//	}
//
//	BFS(x);
//
//	for (int i = 0; i <= n; i++)
//	{
//		if (Visited[i] == k)
//		{
//			Answer.push_back(i);
//		}
//	}
//
//	if (Answer.empty())
//	{
//		cout << -1;
//	}
//	else
//	{
//		sort(Answer.begin(), Answer.end());
//		for (int i : Answer)
//		{
//			cout << i << "\n";
//		}
//	}
//}