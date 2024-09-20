//#include <iostream>
//using namespace std;
//
//int Partition(int a[], int start, int end)
//{
//	int pivot = a[end];
//	int index = start;
//
//	int temp;
//	for (int i = 0; i < end; i++)
//	{
//		if (a[i] <= pivot)
//		{
//			temp = a[i];
//			a[i] = a[index];
//			a[index] = temp;
//			index++;
//		}
//	}
//
//	temp = a[index];
//	a[index] = a[end];
//	a[end] = temp;
//
//	return index;
//}
//
//void QuickSort(int a[], int start, int end)
//{
//	if (start < end)
//	{
//		int index = Partition(a, start, end);
//		QuickSort(a, start, index - 1);
//		QuickSort(a, index + 1, end);
//	}
//}
//
//int main()
//{
//	int a[10] = { 5,7,3,1,9,2,4,6,8,10 };
//	int arrSize = 10;
//
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << a[i] << ", ";
//	}
//
//	cout << "\n";
//
//	QuickSort(a, 0, arrSize - 1);
//
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << a[i] << ", ";
//	}
//}