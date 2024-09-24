//#include <iostream>
//#include <stack>
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
//	stack<int> myStack;
//	vector<char> results;
//
//	bool isNo = false;
//
//	int size = 0;
//	cin >> size;
//
//	int count = 1;
//
//	for (int i = 0; i < size; i++)
//	{
//		int n = 0;
//		cin >> n;
//
//		if (n >= count)
//		{
//			while (n >= count)
//			{
//				myStack.push(count);
//				count++;
//				results.push_back('+');
//			}
//
//			myStack.pop();
//			results.push_back('-');
//		}
//		else
//		{
//			int top = myStack.top();
//
//			myStack.pop();
//
//			if (n > top)
//			{
//				isNo = true;
//				break;
//			}
//			else
//			{
//				results.push_back('-');
//			}
//		}
//	}
//
//	if (isNo)
//	{
//		cout << "NO";
//	}
//	else
//	{
//		for (int i = 0; i < results.size(); i++)
//		{
//			cout << results[i] << '\n';
//		}
//	}
//}