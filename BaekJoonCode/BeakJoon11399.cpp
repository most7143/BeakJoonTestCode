#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 0;

	cin >> size;

	vector<int> origin(size, 0);
	vector<int> add(size, 0); //합배열 벡터

	int result = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> origin[i];
	}

	//1부터 시작해 마지막까지 반복을 도는 for문
	for (int i = 1; i < size; i++)
	{
		int insertIndex = i;
		int insertValue = origin[i];

		//insertIndex ~ 0 까지 역으로 도는 for문
		for (int j = i - 1; j >= 0; j--)
		{
			if (origin[i] > origin[j])
			{
				//j는 현재 비교하고 있는 인덱스이며, j가 더 작은경우 j+1 인덱스에 위치해야한다.
				insertIndex = j + 1;
				break;
			}

			// 다 작다면 값이 변하지 않도록 설정 (밑에 있는 for문이 돌지 않음)
			if (j == 0)
			{
				insertIndex = 0;
			}
		}

		for (int j = i; j > insertIndex; j--)
		{
			origin[j] = origin[j - 1];
		}

		origin[insertIndex] = insertValue;
	}

	//합 배열 구하기
	add[0] = origin[0];
	result = add[0];

	for (int i = 1; i < origin.size(); i++)
	{
		add[i] = add[i - 1] + origin[i];
		result += add[i];
	}

	cout << result;
}