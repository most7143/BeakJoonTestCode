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
//	//��Ʈ������ �޾ƿ� �迭�� �ٲٱ�
//	for (int i = 0; i < N.size(); i++)
//	{
//		list[i] = N[i] - '0';
//	}
//
//	//index�� �迭�� ���������� ������ �ݺ��Ѵ�. ���� ���� ���� ��ġ�� �����Ѵ�.
//	//���� ���ĵ� �ε����� �����ϰ� �ݺ� �Ѵ�.
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