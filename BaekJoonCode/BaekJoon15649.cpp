//#include <iostream>
//
//using namespace std;
//
//int N, M;
//
//int arr[10];
//bool visited[10];
//
////depth는 깊이. (x,y) 에서 y를 담당한다.
//void BackTracking(int depth)
//{
//	//depth가 = M 인경우는 y값이 끝까지 도달했을때 이제 그 한줄을 출력한다.
//	if (depth == M)
//	{
//		for (int i = 0; i < M; i++)
//		{
//			cout << arr[i] << " ";
//		}
//
//		cout << "\n";
//
//		return;
//	}
//	else
//	{
//		//백트랙킹 핵심 부분 X의 값을 기준으로 반복을 돌린다
//		for (int i = 1; i <= N; i++)
//		{
//			//사용된 수가 아닐때를 탐색
//			if (false == visited[i])
//			{
//				//방문여부를 갱신하고
//				visited[i] = true;
//
//				//현재 선택된 값을 지정
//				arr[depth] = i;
//
//				//재귀를 통해서 다음 수를 계산.
//				BackTracking(depth + 1);
//
//				//재귀를 빠져나오면 방문여부를 초기화
//				visited[i] = false;
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
//	cin >> N >> M;
//	BackTracking(0);
//}