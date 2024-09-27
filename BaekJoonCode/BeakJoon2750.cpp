//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int size = 0;
//
//	cin >> size;
//
//	vector<int> myVector(size, 0);
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> myVector[i];
//	}
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (myVector[j] > myVector[j + 1])
//			{
//				int temp = myVector[j + 1];
//				myVector[j + 1] = myVector[j];
//				myVector[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << myVector[i] << '\n';
//	}
//}