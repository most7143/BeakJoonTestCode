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
//	// key 단어 삽입
//	void Insert(const char* key) {
//		if (*key == 0) {
//			isEnd = true;  // 끝 지점 도달 시
//		}
//		else {
//			int next_index = *key - 'a';
//
//			if (next[next_index] == nullptr) {
//				next[next_index] = new Node();  // 자식 노드 생성
//			}
//			next[next_index]->Insert(key + 1);  // 재귀적으로 나머지 부분 삽입
//		}
//	}
//
//	// key 단어 검색
//	Node* Find(const char* key) {
//		if (*key == 0) {
//			return this;  // 끝에 도달한 경우
//		}
//
//		int next_index = *key - 'a';
//
//		if (next[next_index] == nullptr) {
//			return nullptr;  // 해당 문자가 없으면 nullptr 리턴
//		}
//
//		return next[next_index]->Find(key + 1);  // 재귀적으로 검색
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
//	// N개의 단어 입력받아 트라이에 삽입
//	while (N > 0) {
//		string text;
//		cin >> text;  // 문자열 입력을 받음
//		root->Insert(text.c_str());  // c-string으로 변환하여 삽입
//		N--;
//	}
//
//	int count = 0;
//
//	// M개의 단어가 트라이에 있는지 확인
//	while (M > 0) {
//		string text;
//		cin >> text;  // 문자열 입력을 받음
//		Node* result = root->Find(text.c_str());  // c-string으로 변환하여 검색
//
//		if (result && result->isEnd) {
//			count++;  // 단어가 트라이에 존재하는 경우
//		}
//		M--;
//	}
//
//	cout << count << "\n";
//}