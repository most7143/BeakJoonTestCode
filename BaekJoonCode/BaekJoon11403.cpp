//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N; // ����� ��
//	long mDistance[101][101]; // 2���� �迭�� ����, �ִ� 101���� ��忡 ���� �Ÿ� ����
//
//	cin >> N;
//
//	// �Է¹��� ���� ����� mDistance�� ����
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> mDistance[i][j]; // mDistance[i][j]�� i�� j ���̿� ��ΰ� ������ 1, ������ 0
//		}
//	}
//
//	// �÷��̵� ���� �˰����� �̿��Ͽ� ��� ��� �� ��θ� ���
//	for (int k = 0; k < N; k++) // �߰� �������� ����� ��� k
//	{
//		for (int i = 0; i < N; i++) // ��� ��� i
//		{
//			for (int j = 0; j < N; j++) // ���� ��� j
//			{
//				// ��� i -> k, k -> j�� �����ϸ� i -> j�� ����� ������ ����
//				if (mDistance[i][k] == 1 && mDistance[k][j] == 1)
//				{
//					mDistance[i][j] = 1; // i���� j�� ���� ��ΰ� �����Ѵٴ� �ǹ̷� 1�� ����
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << mDistance[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}