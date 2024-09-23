//#include <iostream>
//#include <deque>
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
//	int range = 0;
//	typedef pair<int, int> Node;
//	deque<Node> list;
//
//	cin >> size >> range;
//
//	for (int i = 1; i <= size; i++)
//	{
//		int target;
//
//		cin >> target;
//
//		while (list.size() >= 1 && list.back().second > target)
//		{
//			list.pop_back();
//		}
//
//		list.push_back(Node(i, target));
//
//		if (i - list.front().first >= range)
//		{
//			list.pop_front();
//		}
//
//		cout << list.front().second << " ";
//	}
//}