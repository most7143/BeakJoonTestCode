//#include <iostream>
//#include <unordered_map>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////���Ĺ� ����ġ�� �����ֱ� ���� �ڷᱸ�� ����
//unordered_map<char, int> Maps;
//
//int N;
//
//int main()
//{
//	//����ġ�� ���� ������� ���� ����
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
//			//���Ĺ��� �ڸ�����ŭ 10�� ������ �ο�
//			Maps[a[j]] += pow(10, a.length() - 1 - j);
//		}
//	}
//
//	//���������� �����ϱ� ���� �ڷᱸ�� ����
//	vector<pair<char, int>> sorted(Maps.begin(), Maps.end());
//
//	//�������� ����
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