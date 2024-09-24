//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int size = 0;
//	cin >> size;
//
//	vector<int> inputArr(size, 0);
//	vector<int> answerArr(size, 0);
//	stack<int> myStack;
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> inputArr[i];
//	}
//
//	myStack.push(0);
//
//	for (int i = 1; i < size; i++)
//	{
//		while (false == myStack.empty() && inputArr[myStack.top()] < inputArr[i])
//		{
//			answerArr[myStack.top()] = inputArr[i];
//			myStack.pop();
//		}
//
//		myStack.push(i);
//	}
//
//	while (false == myStack.empty())
//	{
//		answerArr[myStack.top()] = -1;
//		myStack.pop();
//	}
//
//	for (int i = 0; i < answerArr.size(); i++)
//	{
//		cout << answerArr[i] << " ";
//	}
//}