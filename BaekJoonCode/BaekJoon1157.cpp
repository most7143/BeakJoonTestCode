#include <iostream>
#include <cctype>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<char, int> Maps;

int main()
{
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		char alphabat = toupper(s[i]);

		Maps[alphabat]++;
	}

	vector<pair<char, int>> sorted(Maps.begin(), Maps.end());

	sort(sorted.begin(), sorted.end(), [](const pair<char, int>& a, const pair<char, int>& b)
		{
			return a.second > b.second;
		});

	if (sorted[0].second == sorted[1].second)
	{
		cout << "?";
	}
	else
	{
		cout << sorted[0].first;
	}
}