//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int visited[100001] = { 0, };
//
//int n, k;
//
//void BFS()
//{
//	queue<int> q;
//
//	q.push(n);
//
//	visited[n] = 0;
//
//	while (false == q.empty())
//	{
//		int now = q.front();
//		q.pop();
//
//		//�����ϴ� ��쿡�� ����Ż��
//		if (now == k)
//		{
//			break;
//		}
//
//		//�湮���� �ʴ� ���� ������ ������ �ð��� ������Ʈ ���ش�.
//		//�ڷ� ��ĭ�� ���� ��� 0���� �۾����� ��찡 ���� �� �ֱ⿡ ���� �߰�
//		if (now - 1 >= 0 && visited[now - 1] == 0)
//		{
//			visited[now - 1] = visited[now] + 1;
//			q.push(now - 1);
//		}
//
//		//�������ų�, �������°� �迭 �ִ� ������ ����� �ʴ��� �˻��Ѵ�.
//
//		if (now + 1 < 100001 && visited[now + 1] == 0)
//		{
//			visited[now + 1] = visited[now] + 1;
//			q.push(now + 1);
//		}
//
//		if (now * 2 < 100001 && visited[now * 2] == 0)
//		{
//			visited[now * 2] = visited[now] + 1;
//			q.push(now * 2);
//		}
//	}
//
//	cout << visited[k];
//}
//
//int main()
//{
//	cin >> n >> k;
//
//	BFS();
//}