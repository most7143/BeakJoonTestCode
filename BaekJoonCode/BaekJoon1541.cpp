//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
////���ڿ��� �и��ϱ� ���� �Լ�
//vector<string> Split(string n, char divi);
//
////���ڿ��� ���ڵ��� �����ִ� �Լ�
//int GetSum(string n);
//
//int main()
//{
//	string N;
//	int result = 0;
//
//	cin >> N;
//
//	//-�� �������� ���� �ڸ���.
//	vector<string> str = Split(N, '-');
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		//str�� �ִ� ���� �������� �������� ���� ��� �ϳ��� ���� ��ģ��.
//		int temp = GetSum(str[i]);
//
//		if (i == 0)
//		{
//			result += temp;
//		}
//		else
//		{
//			result -= temp;
//		}
//	}
//
//	cout << result;
//}
//
//vector<string> Split(string n, char divi)
//{
//	vector<string> split;
//	stringstream mystream(n);
//	string splitData;
//
//	while (getline(mystream, splitData, divi))
//	{
//		split.push_back(splitData);
//	}
//
//	return split;
//}
//
//int GetSum(string n)
//{
//	int result = 0;
//	vector<string> temp = Split(n, '+');
//
//	for (int i = 0; i < temp.size(); i++)
//	{
//		result += stoi(temp[i]);
//	}
//
//	return result;
//}