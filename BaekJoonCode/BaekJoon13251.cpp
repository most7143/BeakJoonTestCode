//#include<iostream>
//
//using namespace std;
//
//int M, K, T;
//
//int D[51];
//double Probability[51];
//double Ans = 0;
//
//int main()
//{
//	cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		cin >> D[i];
//		T += D[i]; //T�� ���൹�� �� ������ ����
//	}
//
//	cin >> K;
//
//	for (int i = 0; i < M; i++)
//	{
//		if (D[i] >= K) //K���� D[i]�� ���൹ ������ �������� ó��
//		{
//			Probability[i] = 1.0; // Ȯ�� �ʱ�ȭ
//
//			for (int k = 0; k < K; k++)
//			{
//				//ù��°�� ���� Ȯ�� D[i] / T
//				//�ι�° ���ķδ� ���� ���൹��, ���õ� ���൹�� ���� �ٿ����ϱ� ������ - k�� ���ִ� ��
//				//�� Ȯ���� �Լ� ������� �ѹ��� ���� Ȯ���� ��� �� �� ����
//				Probability[i] *= (double)(D[i] - k) / (T - k);
//			}
//		}
//		Ans += Probability[i];
//	}
//
//	cout << fixed;
//	cout.precision(9);
//	cout << Ans;
//}