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

// 랜덤 피벗 선택
int RandomPivot(vector<int>& a, int start, int end) {
	uniform_int_distribution<> dis(start, end);
	return dis(mt19937(random_device()())); // 여기서 랜덤 엔진을 직접 사용
}

int Partition(vector<int>& a, int start, int end) {
	int pivotIndex = RandomPivot(a, start, end);
	int pivotValue = a[pivotIndex];
	swap(a[pivotIndex], a[end]); // 피벗을 끝으로 이동
	int index = start;

	for (int i = start; i < end; i++) {
		if (a[i] <= pivotValue) {
			swap(a[i], a[index++]);
		}
	}
	swap(a[index], a[end]); // 피벗을 올바른 위치로 이동
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
	return a[start]; // start == end인 경우
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

	Shuffle(arr); // 배열을 섞음

	int result = QuickSelect(arr, 0, size - 1, target - 1); // k번째 원소 찾기

	cout << result; // k번째 원소 출력

	return 0;
}