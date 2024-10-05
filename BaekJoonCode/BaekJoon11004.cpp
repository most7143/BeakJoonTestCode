#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void Shuffle(vector<int>& a) {
	random_device rd;
	mt19937 gen(rd());
	for (int i = a.size() - 1; i > 0; i--) {
		uniform_int_distribution<> dis(0, i);
		int j = dis(gen);
		swap(a[i], a[j]);
	}
}

// ���� �ǹ� ����
int RandomPivot(vector<int>& a, int start, int end) {
	uniform_int_distribution<> dis(start, end);
	return dis(mt19937(random_device()())); // ���⼭ ���� ������ ���� ���
}

int Partition(vector<int>& a, int start, int end) {
	int pivotIndex = RandomPivot(a, start, end);
	int pivotValue = a[pivotIndex];
	swap(a[pivotIndex], a[end]); // �ǹ��� ������ �̵�
	int index = start;

	for (int i = start; i < end; i++) {
		if (a[i] <= pivotValue) {
			swap(a[i], a[index++]);
		}
	}
	swap(a[index], a[end]); // �ǹ��� �ùٸ� ��ġ�� �̵�
	return index;
}

int QuickSelect(vector<int>& a, int start, int end, int k) {
	while (end > start) {
		int index = Partition(a, start, end);

		if (index == k) {
			return a[index];
		}
		else if (k < index) {
			end = index - 1;
		}
		else {
			start = index + 1;
		}
	}
	return a[start]; // start == end�� ���
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int size = 0;
	int target = 0;
	cin >> size >> target;

	vector<int> arr(size);
	for (int& num : arr) {
		cin >> num;
	}

	Shuffle(arr); // �迭�� ����

	int result = QuickSelect(arr, 0, size - 1, target - 1); // k��° ���� ã��

	cout << result; // k��° ���� ���

	return 0;
}