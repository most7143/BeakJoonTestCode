//#include <iostream>
//
//using namespace std;
//
//int N, S;
//int Arr[100001];
//
//int main()
//{
//	cin >> N >> S;
//
//	int start = 0;
//	int end = 0;
//	int minLength = N + 1;
//	int sum = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> Arr[i];
//	}
//
//	while (true)
//	{
//		//���� S������ ũ�ų� ���� ��� ������ �����صξ��� �ּұ��̿� ���ϰ�, start �ε����� ������Ŵ(�� ª�� ���̰� �ִ��� üũ)
//		if (sum >= S)
//		{
//			minLength = min(minLength, end - start);
//			sum -= Arr[start];
//			start++;
//		}
//		else if (end == N)
//		{
//			break;
//		}
//		else
//		{
//			//���� S������ ������� end �ε����� ������Ŵ
//			end++;
//			sum += Arr[end];
//		}
//	}
//
//	if (minLength == N + 1)
//	{
//		cout << 0;
//	}
//	else
//	{
//		//��½� ���̿� +1�� �ؾ���
//		cout << minLength + 1;
//	}
//}