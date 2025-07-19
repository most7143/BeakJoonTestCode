#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

vector<pair<int, pair<int, string>>> Arr;

int N;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int age;
		string name;

		cin >> age >> name;

		Arr.push_back({ age,{i,name} });
	}

	sort(Arr.begin(), Arr.end(), [](const auto& a, const auto& b)
		{
			if (a.first != b.first) return a.first < b.first;
			return a.second.first < b.second.first;
		});

	for (int i = 0; i < N; i++)
	{
		cout << Arr[i].first << " " << Arr[i].second.second << "\n";
	}
}