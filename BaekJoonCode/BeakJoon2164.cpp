#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 0;
	cin >> size;

	queue<int> cards;

	for (int i = 1; i <= size; i++)
	{
		cards.push(i);
	}

	while (cards.size() > 1)
	{
		cards.pop();

		cards.push(cards.front());

		cards.pop();
	}

	cout << cards.front();
}