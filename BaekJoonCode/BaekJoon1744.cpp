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
//	//-는 상수값이 클수록 낮은수 이기 때문에 정렬을 반대로 설정
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
//	//두개씩 곱해야 하므로 사이즈가 1보다 커야함
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
//	//음수가 1개 남았을때 0이 없다면, 그대로 대입 (있을 경우 *0으로 없앨 수 있기 때문에)
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