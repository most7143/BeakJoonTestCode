//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	long min, max;
//
//	cin >> min >> max;
//
//	//min�� max�� ���̸�ŭ vector�� ����
//	vector<bool> check(max - min + 1);
//
//	int count = 0;
//
//	//ù��° for���� ��������ŭ ���ư����� ����.
//	for (long i = 2; i * i <= max; i++)
//	{
//		//���� ������
//		long pow = i * i;
//
//		//�������� ó�� �����ϴ� ��ġ�� min/pow�� �����´�.
//		//�ٸ�, ó���� �����ϴ� ���� ����� �ƴ� ���� �ֱ� ������ �ƴ϶�� +1�� �� �����.
//		long startIndex = min / pow;
//
//		if (min % pow != 0)
//		{
//			startIndex++;
//		}
//
//		for (long j = startIndex; pow * j <= max; j++)
//		{
//			//���� ��ġ ���. �迭�� 0 ���ͽ����ϱ⿡ -min�� ����� ����� �� ��ġ�� �����´�.
//			int index = (int)(pow * j) - min;
//
//			check[index] = true;
//		}
//	}
//
//	for (int i = 0; i < check.size(); i++)
//	{
//		if (false == check[i])
//		{
//			count++;
//		}
//	}
//
//	cout << count;
//}