#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//ÁÁ´Ù 1523
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	int count = 0;

	cin >> n;

	vector<int> a(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (int k = 0; k < n; k++)
	{
		int i = 0;
		int j = n - 1;

		long target = a[k];

		while (i < j)
		{
			if (i != k && j != k)
			{
				long sum = a[i] + a[j];

				if (sum == target)
				{
					count++;
					break;
				}
				else if (sum < target)
				{
					i++;
				}
				else
				{
					j--;
				}
			}
			else
			{
				if (j == k)
				{
					j--;
				}
				else
				{
					i++;
				}
			}
		}
	}

	cout << count;
}