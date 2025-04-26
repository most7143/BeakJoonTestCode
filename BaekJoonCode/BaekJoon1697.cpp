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
//		//도착하는 경우에는 루프탈출
//		if (now == k)
//		{
//			break;
//		}
//
//		//방문하지 않는 곳에 도착할 때마다 시간을 업데이트 해준다.
//		//뒤로 한칸을 가는 경우 0보다 작아지는 경우가 생길 수 있기에 조건 추가
//		if (now - 1 >= 0 && visited[now - 1] == 0)
//		{
//			visited[now - 1] = visited[now] + 1;
//			q.push(now - 1);
//		}
//
//		//더해지거나, 곱해지는건 배열 최대 범위를 벗어나지 않는지 검사한다.
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