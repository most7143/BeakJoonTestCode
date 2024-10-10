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

	while (i <= mid && j <= end) //temp에 i와 j를 비교해 작은순으로 값을 넣어준다.
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

	//둘 중에 더 이상 비교할 수가 없다면 temp에 넣어준다.

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