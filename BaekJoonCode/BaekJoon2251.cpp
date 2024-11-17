//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////���� �ű�� ����� ���� �̸� �迭�� ���� (0,1) , (0,2) , (1,2) ...
//static int Send[] = { 0,0,1,1,2,2 };
//static int Receive[] = { 1,2,0,2,0,1 };
//
//static bool Visited[201][201];
//static bool Answer[201];
//static int Now[3];
//
//void BFS()
//{
//	queue<pair<int, int>> myQueue;
//	myQueue.push(make_pair(0, 0));
//	Visited[0][0] = true;
//	Answer[Now[2]] = true;
//
//	while (false == myQueue.empty())
//	{
//		pair<int, int> p = myQueue.front();
//		myQueue.pop();
//
//		int a = p.first;
//		int b = p.second;
//
//		//3�� ��� = ��ü���� �翡�� a,b�� ����
//		int c = Now[2] - a - b;
//
//		for (int i = 0; i < 6; i++)
//		{
//			int next[] = { a,b,c };
//			next[Receive[i]] += next[Send[i]];
//			next[Send[i]] = 0;
//
//			//��ġ�� �翡 ���� ó��
//			if (next[Receive[i]] > Now[Receive[i]])
//			{
//				next[Send[i]] = next[Receive[i]] - Now[Receive[i]];
//				next[Receive[i]] = Now[Receive[i]];
//			}
//
//			//�湮�� ���� ���� ���� ���� ó��
//			if (false == Visited[next[0]][next[1]])
//			{
//				Visited[next[0]][next[1]] = true;
//				myQueue.push(make_pair(next[0], next[1]));
//
//				if (next[0] == 0)
//				{
//					Answer[next[2]] = true;
//				}
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
//	cin >> Now[0] >> Now[1] >> Now[2];
//
//	BFS();
//
//	for (int i = 0; i < 201; i++)
//	{
//		if (Answer[i])
//		{
//			cout << i << " ";
//		}
//	}
//}