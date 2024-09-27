//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct Compare
//{
//	bool operator()(int first, int second)
//	{
//		int first_abs = abs(first);
//		int second_abs = abs(second);
//
//		if (first_abs == second_abs)
//		{
//			return first > second;
//		}
//		else
//		{
//			return first_abs > second_abs;
//		}
//	}
//};
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
//	priority_queue<int, vector<int>, Compare> myQueue;
//
//	for (int i = 0; i < size; i++)
//	{
//		int n;
//
//		cin >> n;
//
//		if (n == 0)
//		{
//			if (false == myQueue.empty())
//			{
//				cout << myQueue.top() << "\n";
//				myQueue.pop();
//			}
//			else
//			{
//				cout << '0' << "\n";
//			}
//		}
//		else
//		{
//			myQueue.push(n);
//		}
//	}
//}