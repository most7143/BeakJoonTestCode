//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	priority_queue<int> plusQueue;
//
//	//-�� ������� Ŭ���� ������ �̱� ������ ������ �ݴ�� ����
//	priority_queue<int, vector<int>, greater<int>> minusQueue;
//
//	int oneCount = 0;
//	int zeroCount = 0;
//
//	int sum = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		int data;
//		cin >> data;
//
//		if (data < 0)
//		{
//			minusQueue.push(data);
//		}
//		else if (data > 1)
//		{
//			plusQueue.push(data);
//		}
//		else if (data == 1)
//		{
//			oneCount++;
//		}
//		else
//		{
//			zeroCount++;
//		}
//	}
//
//	//�ΰ��� ���ؾ� �ϹǷ� ����� 1���� Ŀ����
//	while (plusQueue.size() > 1)
//	{
//		int first = plusQueue.top();
//		plusQueue.pop();
//		int second = plusQueue.top();
//		plusQueue.pop();
//
//		sum += first * second;
//	}
//
//	if (!plusQueue.empty())
//	{
//		sum += plusQueue.top();
//	}
//
//	while (minusQueue.size() > 1)
//	{
//		int first = minusQueue.top();
//		minusQueue.pop();
//		int second = minusQueue.top();
//		minusQueue.pop();
//
//		sum += first * second;
//	}
//
//	//������ 1�� �������� 0�� ���ٸ�, �״�� ���� (���� ��� *0���� ���� �� �ֱ� ������)
//	if (!minusQueue.empty())
//	{
//		if (zeroCount == 0)
//		{
//			sum += minusQueue.top();
//		}
//	}
//
//	sum += oneCount;
//
//	cout << sum;
//}