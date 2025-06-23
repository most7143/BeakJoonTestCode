#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N;
int Count;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		//서류 심사 성적, 면접 심사 성적을 담을 자료구조 선언
		vector<pair<int, int>> applicants;

		for (int j = 0; j < N; j++)
		{
			int a, b;

			cin >> a >> b;

			applicants.push_back({ a,b });
		}

		//서류 심사를 기준으로 정렬
		sort(applicants.begin(), applicants.end());

		Count = 1;

		//기준이 될 최소 등수 배열 위치
		int min = 0;

		for (int j = 1; j < N; j++)
		{
			//등수가 더 높으면 합격율을 추가하고, 최소 등수를 갱신한다.
			//갱신하는 이유는 이미 서류로 정렬을 했기 때문에 서류와 면접 등수 둘 다 지는 경우를 걸러내기 위함
			if (applicants[min].second >= applicants[j].second)
			{
				min = j;
				Count++;
			}
		}

		cout << Count << endl;
	}
}