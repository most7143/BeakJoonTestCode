//#include <iostream>
//#include <unordered_map>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////알파뱃 가중치를 더해주기 위한 자료구조 선언
//unordered_map<char, int> Maps;
//
//int N;
//
//int main()
//{
//	//가중치가 높은 순서대로 수를 곱함
//	int add = 9;
//
//	int sum = 0;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		string a;
//
//		cin >> a;
//
//		for (int j = 0; j < a.length(); j++)
//		{
//			//알파뱃의 자릿수만큼 10의 제곱을 부여
//			Maps[a[j]] += pow(10, a.length() - 1 - j);
//		}
//	}
//
//	//높은순으로 정렬하기 위해 자료구조 선언
//	vector<pair<char, int>> sorted(Maps.begin(), Maps.end());
//
//	//내림차순 정렬
//	sort(sorted.begin(), sorted.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
//		return a.second > b.second;
//		});
//
//	for (int i = 0; i < sorted.size(); i++)
//	{
//		sum += sorted[i].second * add;
//
//		add--;
//	}
//
//	cout << sum;
//}