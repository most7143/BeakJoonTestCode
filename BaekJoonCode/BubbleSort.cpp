//#include<iostream>
//using namespace std;
//
//int arr[5] = { 5,3,1,2,4 };
//
//int main()
//{
//	int temp = 0;
//	int size = 5;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//	cout << "\n--------------\n";
//
//	while (size > 0)
//	{
//		for (int i = 0; i < size - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//		}
//		size--;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}