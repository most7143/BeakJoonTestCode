//#include <iostream>
//
//using namespace std;
//
//int N, M;
//
//int arr[10];
//bool visited[10];
//
////depth�� ����. (x,y) ���� y�� ����Ѵ�.
//void BackTracking(int depth)
//{
//	//depth�� = M �ΰ��� y���� ������ ���������� ���� �� ������ ����Ѵ�.
//	if (depth == M)
//	{
//		for (int i = 0; i < M; i++)
//		{
//			cout << arr[i] << " ";
//		}
//
//		cout << "\n";
//
//		return;
//	}
//	else
//	{
//		//��Ʈ��ŷ �ٽ� �κ� X�� ���� �������� �ݺ��� ������
//		for (int i = 1; i <= N; i++)
//		{
//			//���� ���� �ƴҶ��� Ž��
//			if (false == visited[i])
//			{
//				//�湮���θ� �����ϰ�
//				visited[i] = true;
//
//				//���� ���õ� ���� ����
//				arr[depth] = i;
//
//				//��͸� ���ؼ� ���� ���� ���.
//				BackTracking(depth + 1);
//
//				//��͸� ���������� �湮���θ� �ʱ�ȭ
//				visited[i] = false;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//	BackTracking(0);
//}