#include<iostream>
#include<queue>
#include<vector>

using namespace std;

//범위 설정 - 모든 배열을 순회하진 않기 때문에 최대 길이로 지정
int boxes[1001][1001];

//상하좌우 탐색로직
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int m, n;

queue<pair<int, int>> tomatos;

void BFS()
{
	while (false == tomatos.empty())
	{
		int a = tomatos.front().first;
		int b = tomatos.front().second;

		tomatos.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = a + dx[i];
			int ny = b + dy[i];

			//배열 범위를 벗어나지 않으면서, 아직 익지않은 토마토 가 있는지 여부
			if (nx >= 0 && ny >= 0 && nx < n && ny < m && boxes[nx][ny] == 0)
			{
				//몇일 차에 익었는지 해당 배열에 입력
				boxes[nx][ny] = boxes[a][b] + 1;
				tomatos.push({ nx,ny });
			}
		}
	}
}

int main()
{
	cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> boxes[i][j];
			//익은 토마토를 quque에 넣는다. 시작점이 여러곳일 수 있기 때문에
			if (boxes[i][j] == 1)
			{
				tomatos.push({ i,j });
			}
		}
	}

	BFS();

	//출력 정하는 곳.
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (boxes[i][j] == 0)
			{
				cout << "-1";
				return 0;
			}

			//순회하면서 가장 일수가 높은 토마토를 가져온다.
			if (max < boxes[i][j])
			{
				max = boxes[i][j];
			}
		}
	}

	//0이 아닌 1부터 시작했기 때문에 -1 해준다.
	cout << max - 1;

	return 0;
}

//시각화용

//void printBoxes() {
//	cout << "현재 상태:\n";
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << boxes[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	cout << "----------------------\n";
//}
//
//void BFS()
//{
//	while (!tomatos.empty())
//	{
//		int a = tomatos.front().first;
//		int b = tomatos.front().second;
//
//		tomatos.pop();
//
//		cout << "처리 중인 토마토 위치: (" << a << ", " << b << ")\n";
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = a + dx[i];
//			int ny = b + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m && boxes[nx][ny] == 0)
//			{
//				boxes[nx][ny] = boxes[a][b] + 1;
//				tomatos.push({ nx,ny });
//
//				cout << "→ 익힘: (" << nx << ", " << ny << ") = " << boxes[nx][ny] << "일차\n";
//			}
//		}
//		printBoxes();
//	}
//}
//
//int main()
//{
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> boxes[i][j];
//			if (boxes[i][j] == 1)
//			{
//				tomatos.push({ i,j });
//			}
//		}
//	}
//
//	BFS();
//
//	int max = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (boxes[i][j] == 0)
//			{
//				cout << "-1";
//				return 0;
//			}
//
//			if (max < boxes[i][j])
//			{
//				max = boxes[i][j];
//			}
//		}
//	}
//
//	cout << "총 소요일: " << max - 1 << "\n";
//
//	return 0;
//}