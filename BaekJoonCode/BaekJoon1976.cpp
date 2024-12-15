//#include <iostream>
//#include <vector>
//using namespace std;
//
//// ���Ͽ� ���ε带 �̿��Ѵ�.
//
//static vector<int> Parent;
//
////��ǥ ��带 ã�� ��ȯ�ϴ� �Լ� (����Լ�)
//int Find(int a)
//{
//	if (a == Parent[a])
//	{
//		return a;
//	}
//	else
//	{
//		return Parent[a] = Find(Parent[a]);
//	}
//}
//
////��ǥ ��峢�� �����ϴ� �Լ�
//void Union(int a, int b)
//{
//	a = Find(a);
//	b = Find(b);
//
//	if (a != b)
//	{
//		Parent[b] = a;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//
//	cin >> n >> m;
//
//	int dosi[201][201];
//
//	//���� ���� ������ ����
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			cin >> dosi[i][j];
//	}
//
//	int route[1001];
//
//	//���� ���� ���� ����
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> route[i];
//	}
//
//	Parent.resize(n + 1);
//
//	for (int i = 1; i <= n; i++)
//	{
//		Parent[i] = i;
//	}
//
//	//Ž�� �� ���ð� ����Ǿ� �ִٸ� ���Ͽ� ����
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			if (dosi[i][j] == 1)
//				Union(i, j);
//	}
//
//	//���� ��ȹ ���ð� �ϳ��� ��ǥ ���÷� ����Ǵ��� Ȯ��
//	int index = Find(route[1]);
//	bool connect = true;
//
//	for (int i = 2; i <= m; i++)
//	{
//		if (index != Find(route[i]))
//		{
//			cout << "NO";
//			connect = false;
//			break;
//		}
//	}
//
//	if (connect)
//	{
//		cout << "YES";
//	}
//}