//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
////문자열을 분리하기 위한 함수
//vector<string> Split(string n, char divi);
//
////문자열의 숫자들을 더해주는 함수
//int GetSum(string n);
//
//int main()
//{
//	string N;
//	int result = 0;
//
//	cin >> N;
//
//	//-를 기준으로 먼저 자른다.
//	vector<string> str = Split(N, '-');
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		//str에 있는 값이 여러개의 덧셈으로 있을 경우 하나의 수로 합친다.
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