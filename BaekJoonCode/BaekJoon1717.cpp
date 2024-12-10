//#include <iostream>
//#include <vector>
//using namespace std;
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
////�� ���� ���� �������� Ȯ��
//bool CheckSame(int a, int b)
//{
//	a = Find(a);
//	b = Find(b);
//
//	return a == b;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	Parent.resize(n + 1);
//
//	for (int i = 0; i <= n; i++)
//	{
//		Parent[i] = i;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int question, a, b;
//
//		cin >> question >> a >> b;
//
//		if (question == 0)
//		{
//			Union(a, b);
//		}
//		else
//		{
//			if (CheckSame(a, b))
//			{
//				cout << "YES" << "\n";
//			}
//			else
//			{
//				cout << "NO" << "\n";
//			}
//		}
//	}
//}