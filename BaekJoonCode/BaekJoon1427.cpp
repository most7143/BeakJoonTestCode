//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string N;
//	cin >> N;
//
//	vector<int> list(N.size());
//	int index = 0;
//
//	//스트링으로 받아와 배열로 바꾸기
//	for (int i = 0; i < N.size(); i++)
//	{
//		list[i] = N[i] - '0';
//	}
//
//	//index가 배열의 마지막까지 돌도록 반복한다. 값을 비교해 서로 위치를 스왑한다.
//	//이후 정렬된 인덱스를 제외하고 반복 한다.
//	while (index < N.size() - 1)
//	{
//		for (int i = index; i < N.size(); i++)
//		{
//			if (N[index] < N[i])
//			{
//				swap(N[index], N[i]);
//			}
//		}
//
//		index++;
//	}
//
//	for (int i = 0; i < N.size(); i++)
//	{
//		cout << N[i];
//	}
//}