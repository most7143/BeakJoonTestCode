//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Node {
//public:
//	Node* next[26];
//	bool isEnd;
//
//	Node() : isEnd(false) {
//		fill(next, next + 26, nullptr);
//	}
//
//	~Node() {
//		for (auto& child : next) {
//			delete child;
//		}
//	}
//
//	// key �ܾ� ����
//	void Insert(const char* key) {
//		if (*key == 0) {
//			isEnd = true;  // �� ���� ���� ��
//		}
//		else {
//			int next_index = *key - 'a';
//
//			if (next[next_index] == nullptr) {
//				next[next_index] = new Node();  // �ڽ� ��� ����
//			}
//			next[next_index]->Insert(key + 1);  // ��������� ������ �κ� ����
//		}
//	}
//
//	// key �ܾ� �˻�
//	Node* Find(const char* key) {
//		if (*key == 0) {
//			return this;  // ���� ������ ���
//		}
//
//		int next_index = *key - 'a';
//
//		if (next[next_index] == nullptr) {
//			return nullptr;  // �ش� ���ڰ� ������ nullptr ����
//		}
//
//		return next[next_index]->Find(key + 1);  // ��������� �˻�
//	}
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	Node* root = new Node();
//
//	// N���� �ܾ� �Է¹޾� Ʈ���̿� ����
//	while (N > 0) {
//		string text;
//		cin >> text;  // ���ڿ� �Է��� ����
//		root->Insert(text.c_str());  // c-string���� ��ȯ�Ͽ� ����
//		N--;
//	}
//
//	int count = 0;
//
//	// M���� �ܾ Ʈ���̿� �ִ��� Ȯ��
//	while (M > 0) {
//		string text;
//		cin >> text;  // ���ڿ� �Է��� ����
//		Node* result = root->Find(text.c_str());  // c-string���� ��ȯ�Ͽ� �˻�
//
//		if (result && result->isEnd) {
//			count++;  // �ܾ Ʈ���̿� �����ϴ� ���
//		}
//		M--;
//	}
//
//	cout << count << "\n";
//}