//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	//�켱���� ť ����
//	priority_queue<int, vector<int>, greater<int>> A;
//
//	int count = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		A.push(a);
//	}
//
//	int cards1 = 0;
//	int cards2 = 0;
//	int sum = 0;
//
//	//ť�� ���� 2�̻��� ������ ���� �ݺ� (2���� ī�� ��ġ�� ���ؾ� �ϱ� ����)
//
//	while (A.size() > 1)
//	{
//		cards1 = A.top();
//		A.pop();
//		cards2 = A.top();
//		A.pop();
//
//		sum = cards1 + cards2;
//		A.push(sum);
//
//		count += sum;
//
//	}
//
//	cout << count;
//}