//#include <iostream>
//#include <queue>
//using namespace std;
//
//// �����¿�� �̵��ϱ� ���� �迭 (4����)
//static int dr[] = { -1, 0, 1, 0 }; // ��,��,��,��
//static int dc[] = { 0, 1, 0, -1 };
//
//static int map[101][101]; // ����
//static bool visited[101][101]; // �湮 ����
//
//static vector<int> parents; // �θ� ��� �迭 (���Ͽ� ����Ʈ)
//
//static int N, M, sNum; // N: ���� ���� ũ��, M: ���� ���� ũ��, sNum: �� ��ȣ
//
//static vector <vector<pair<int, int>>> sumList; // �� ���� ��ǥ ����Ʈ
//static vector<pair<int, int>> mList; // ���� ���� ��ǥ ����Ʈ
//
//// ����(�ٸ�) ����ü (ũ�罺Į �˰���)
//typedef struct Edge {
//	int s, e, v; // ���� ��, �� ��, �ٸ��� ����
//
//	// �ּ� ���� ����� ���� ����ġ �� ������ �����ε�
//	bool operator > (const Edge& temp) const {
//		return v > temp.v;
//	}
//} Edge;
//
//// �������� ������ �켱���� ť (�ּ� ��)
//static priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//// �θ� ã�� (���Ͽ� ���ε�)
//int Find(int a) {
//	if (a == parents[a]) { // �θ� �ڱ� �ڽ��̸� �ڱ� �ڽ��� ��ȯ
//		return a;
//	}
//	else {
//		return parents[a] = Find(parents[a]); // ��� ����
//	}
//}
//
//// �� ������ ��ġ�� �Լ� (���Ͽ� ���ε�)
//void Union(int a, int b) {
//	a = Find(a); // a�� �θ� ã��
//	b = Find(b); // b�� �θ� ã��
//
//	if (a != b) { // �θ� �ٸ���
//		parents[b] = a; // b�� �θ� a�� ����
//	}
//}
//
//// BFS
//void BFS(int i, int j) {
//	queue<pair<int, int>> myQueue;
//
//	mList.clear(); // ���� ���� ��ǥ ����Ʈ �ʱ�ȭ
//
//	myQueue.push(make_pair(i, j)); // ���� ����
//	mList.push_back(make_pair(i, j)); // ���� ������ ���� ����Ʈ�� �߰�
//
//	visited[i][j] = true; // �湮 ó��
//	map[i][j] = sNum; // ���� ��ġ�� �� ��ȣ ����
//
//	while (!myQueue.empty()) { // ť�� ������� ������
//		int r = myQueue.front().first;
//		int c = myQueue.front().second;
//		myQueue.pop();
//
//		// 4���� Ž��
//		for (int d = 0; d < 4; d++) {
//			int tempR = dr[d];
//			int tempC = dc[d];
//
//			while (r + tempR >= 0 && r + tempR < N && c + tempC >= 0 && c + tempC < M) {
//				// ���� ĭ�� ���� �ȿ� ���� ���
//				if (!visited[r + tempR][c + tempC] && map[r + tempR][c + tempC] != 0) {
//					int now_i = r + tempR;
//					int now_j = c + tempC;
//
//					map[now_i][now_j] = sNum; // �� ��ȣ ����
//					visited[now_i][now_j] = true; // �湮 ó��
//					mList.push_back(make_pair(now_i, now_j)); // �� ����Ʈ�� �߰�
//					myQueue.push(make_pair(now_i, now_j)); // ť�� �߰�
//				}
//				else {
//					break; // �ٸ� ���� ������ Ž�� ����
//				}
//
//				// 4������ ��� ��ȸ
//				if (tempR < 0) {
//					tempR--;
//				}
//				else if (tempR > 0) {
//					tempR++;
//				}
//				else if (tempC < 0) {
//					tempC--;
//				}
//				else if (tempC > 0) {
//					tempC++;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M; // ���� ũ�� �Է�
//
//	// ���� �Է� �ޱ�
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	sNum = 1; // �� ��ȣ ���� (1����)
//
//	// BFS�� �� ���� ����
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] != 0 && !visited[i][j]) { // �����̸鼭 ���� �湮���� ���� ���
//				BFS(i, j); // BFS Ž��
//				sNum++; // �� ��ȣ ����
//				sumList.push_back(mList); // ���� ��ǥ ��� �߰�
//			}
//		}
//	}
//
//	// ũ�罺Į �˰����� ���� �� ���� �ٸ� ���� ���� ����
//	for (int i = 0; i < sumList.size(); i++) {
//		vector<pair<int, int>> now = sumList[i]; // ���� ���� ��ǥ ����Ʈ
//
//		for (int j = 0; j < now.size(); j++) {
//			int r = now[j].first;
//			int c = now[j].second;
//
//			int now_S = map[r][c]; // ���� �� ��ȣ
//
//			// 4�������� �ٸ� ���� ���
//			for (int d = 0; d < 4; d++) {
//				int tempR = dr[d];
//				int tempC = dc[d];
//				int blength = 0; // �ٸ� ���� �ʱ�ȭ
//
//				while (r + tempR >= 0 && r + tempR < N && c + tempC >= 0 && c + tempC < M) {
//					// ���� ���� ������ ����
//					if (map[r + tempR][c + tempC] == now_S) {
//						break;
//					}
//					// �ٸ� ���� ������ �ٸ� ����
//					else if (map[r + tempR][c + tempC] != 0) {
//						if (blength > 1) {
//							pq.push(Edge{ now_S, map[r + tempR][c + tempC], blength }); // �ٸ� �߰�
//						}
//						break;
//					}
//					else {
//						blength++; // �ٴٸ� ������ �ٸ� ���� ����
//					}
//
//					// 4���� ��� Ž��
//					if (tempR < 0) {
//						tempR--;
//					}
//					else if (tempR > 0) {
//						tempR++;
//					}
//					else if (tempC < 0) {
//						tempC--;
//					}
//					else if (tempC > 0) {
//						tempC++;
//					}
//				}
//			}
//		}
//	}
//
//	// �θ� �迭 �ʱ�ȭ
//	parents.resize(sNum);
//
//	for (int i = 0; i < parents.size(); i++) {
//		parents[i] = i;
//	}
//
//	int useEdge = 0; // ����� ���� ����
//	int result = 0; // �� ���
//
//	// ũ�罺Į �˰������� �ּ� ���� Ʈ�� �����
//	while (!pq.empty()) {
//		Edge now = pq.top(); // �ּ� �ٸ� ��������
//		pq.pop();
//
//		// ���� �ٸ� �� ���� ������ �� ������ ����
//		if (Find(now.s) != Find(now.e)) {
//			Union(now.s, now.e); // �� ���� ����
//			result += now.v; // �ٸ� ���� ���ϱ�
//			useEdge++; // ����� ���� ���� ����
//		}
//	}
//
//	if (useEdge == sNum - 2) {
//		cout << result;
//	}
//	else {
//		cout << "-1";
//	}
//}