#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 0;

	cin >> size;

	vector<int> origin(size, 0);
	vector<int> add(size, 0); //�չ迭 ����

	int result = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> origin[i];
	}

	//1���� ������ ���������� �ݺ��� ���� for��
	for (int i = 1; i < size; i++)
	{
		int insertIndex = i;
		int insertValue = origin[i];

		//insertIndex ~ 0 ���� ������ ���� for��
		for (int j = i - 1; j >= 0; j--)
		{
			if (origin[i] > origin[j])
			{
				//j�� ���� ���ϰ� �ִ� �ε����̸�, j�� �� ������� j+1 �ε����� ��ġ�ؾ��Ѵ�.
				insertIndex = j + 1;
				break;
			}

			// �� �۴ٸ� ���� ������ �ʵ��� ���� (�ؿ� �ִ� for���� ���� ����)
			if (j == 0)
			{
				insertIndex = 0;
			}
		}

		for (int j = i; j > insertIndex; j--)
		{
			origin[j] = origin[j - 1];
		}

		origin[insertIndex] = insertValue;
	}

	//�� �迭 ���ϱ�
	add[0] = origin[0];
	result = add[0];

	for (int i = 1; i < origin.size(); i++)
	{
		add[i] = add[i - 1] + origin[i];
		result += add[i];
	}

	cout << result;
}