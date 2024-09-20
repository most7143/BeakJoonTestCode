//#include <iostream>
//using namespace std;
//
//void Merge(int a[], int left, int mid, int right)
//{
//	int temp[100];
//
//	int i = left;
//	int j = mid + 1;
//	int k = 0;
//
//	while (i <= mid && j <= right)
//	{
//		if (a[i] <= a[j])
//		{
//			temp[k] = a[i];
//			i++;
//			k++;
//		}
//		else if (a[i] > a[j])
//		{
//			temp[k] = a[j];
//			j++;
//			k++;
//		}
//	}
//
//	while (i <= mid)
//	{
//		temp[k] = a[i];
//		i++;
//		k++;
//	}
//
//	while (j <= right)
//	{
//		temp[k] = a[j];
//		j++;
//		k++;
//	}
//
//	k--;
//
//	while (k >= 0)
//	{
//		a[left + k] = temp[k];
//		k--;
//	}
//}
//
//void Divide(int a[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//
//		Divide(a, left, mid);
//		Divide(a, mid + 1, right);
//
//		Merge(a, left, mid, right);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int arrSize = 10;
//
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//
//	cout << "\n" << endl;
//
//	Divide(arr, 0, arrSize - 1);
//
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}