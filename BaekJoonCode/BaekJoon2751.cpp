#include <iostream>
#include <vector>
using namespace std;

static vector<int> A;
static vector<int> Temp;

void Sort(vector<int>& a, int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= end) //temp�� i�� j�� ���� ���������� ���� �־��ش�.
	{
		if (a[i] <= a[j])
		{
			Temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			Temp[k] = a[j];
			j++;
			k++;
		}
	}

	//�� �߿� �� �̻� ���� ���� ���ٸ� temp�� �־��ش�.

	while (i <= mid)
	{
		Temp[k] = a[i];
		i++;
		k++;
	}

	while (j <= end)
	{
		Temp[k] = a[j];
		j++;
		k++;
	}

	k--;

	while (k >= 0)
	{
		a[start + k] = Temp[k];
		k--;
	}
}

void MergeSort(vector<int>& a, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;

		MergeSort(a, start, mid);
		MergeSort(a, mid + 1, end);

		Sort(a, start, mid, end);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 0;

	cin >> size;

	A = vector<int>(size, 0);
	Temp = vector<int>(size, 0);

	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}

	MergeSort(A, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		cout << A[i] << '\n';
	}
}