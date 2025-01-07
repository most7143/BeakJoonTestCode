//#include <iostream>
//#include <queue>
//using namespace std;
//
//// 상하좌우로 이동하기 위한 배열 (4방향)
//static int dr[] = { -1, 0, 1, 0 }; // 좌,우,상,하
//static int dc[] = { 0, 1, 0, -1 };
//
//static int map[101][101]; // 지도
//static bool visited[101][101]; // 방문 여부
//
//static vector<int> parents; // 부모 노드 배열 (유니온 파인트)
//
//static int N, M, sNum; // N: 지도 세로 크기, M: 지도 가로 크기, sNum: 섬 번호
//
//static vector <vector<pair<int, int>>> sumList; // 각 섬의 좌표 리스트
//static vector<pair<int, int>> mList; // 현재 섬의 좌표 리스트
//
//// 간선(다리) 구조체 (크루스칼 알고리즘)
//typedef struct Edge {
//	int s, e, v; // 시작 섬, 끝 섬, 다리의 길이
//
//	// 최소 힙을 만들기 위해 가중치 비교 연산자 오버로딩
//	bool operator > (const Edge& temp) const {
//		return v > temp.v;
//	}
//} Edge;
//
//// 간선들을 저장할 우선순위 큐 (최소 힙)
//static priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
//
//// 부모 찾기 (유니온 파인드)
//int Find(int a) {
//	if (a == parents[a]) { // 부모가 자기 자신이면 자기 자신을 반환
//		return a;
//	}
//	else {
//		return parents[a] = Find(parents[a]); // 경로 압축
//	}
//}
//
//// 두 집합을 합치는 함수 (유니온 파인드)
//void Union(int a, int b) {
//	a = Find(a); // a의 부모 찾기
//	b = Find(b); // b의 부모 찾기
//
//	if (a != b) { // 부모가 다르면
//		parents[b] = a; // b의 부모를 a로 설정
//	}
//}
//
//// BFS
//void BFS(int i, int j) {
//	queue<pair<int, int>> myQueue;
//
//	mList.clear(); // 현재 섬의 좌표 리스트 초기화
//
//	myQueue.push(make_pair(i, j)); // 시작 지점
//	mList.push_back(make_pair(i, j)); // 시작 지점을 섬의 리스트에 추가
//
//	visited[i][j] = true; // 방문 처리
//	map[i][j] = sNum; // 현재 위치에 섬 번호 설정
//
//	while (!myQueue.empty()) { // 큐가 비어있지 않으면
//		int r = myQueue.front().first;
//		int c = myQueue.front().second;
//		myQueue.pop();
//
//		// 4방향 탐색
//		for (int d = 0; d < 4; d++) {
//			int tempR = dr[d];
//			int tempC = dc[d];
//
//			while (r + tempR >= 0 && r + tempR < N && c + tempC >= 0 && c + tempC < M) {
//				// 다음 칸이 지도 안에 있을 경우
//				if (!visited[r + tempR][c + tempC] && map[r + tempR][c + tempC] != 0) {
//					int now_i = r + tempR;
//					int now_j = c + tempC;
//
//					map[now_i][now_j] = sNum; // 섬 번호 설정
//					visited[now_i][now_j] = true; // 방문 처리
//					mList.push_back(make_pair(now_i, now_j)); // 섬 리스트에 추가
//					myQueue.push(make_pair(now_i, now_j)); // 큐에 추가
//				}
//				else {
//					break; // 다른 섬을 만나면 탐색 종료
//				}
//
//				// 4방향을 계속 순회
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
//	cin >> N >> M; // 지도 크기 입력
//
//	// 지도 입력 받기
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	sNum = 1; // 섬 번호 시작 (1부터)
//
//	// BFS로 각 섬을 구분
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] != 0 && !visited[i][j]) { // 육지이면서 아직 방문하지 않은 경우
//				BFS(i, j); // BFS 탐색
//				sNum++; // 섬 번호 증가
//				sumList.push_back(mList); // 섬의 좌표 목록 추가
//			}
//		}
//	}
//
//	// 크루스칼 알고리즘을 위해 각 섬의 다리 길이 정보 추출
//	for (int i = 0; i < sumList.size(); i++) {
//		vector<pair<int, int>> now = sumList[i]; // 현재 섬의 좌표 리스트
//
//		for (int j = 0; j < now.size(); j++) {
//			int r = now[j].first;
//			int c = now[j].second;
//
//			int now_S = map[r][c]; // 현재 섬 번호
//
//			// 4방향으로 다리 길이 계산
//			for (int d = 0; d < 4; d++) {
//				int tempR = dr[d];
//				int tempC = dc[d];
//				int blength = 0; // 다리 길이 초기화
//
//				while (r + tempR >= 0 && r + tempR < N && c + tempC >= 0 && c + tempC < M) {
//					// 같은 섬을 만나면 종료
//					if (map[r + tempR][c + tempC] == now_S) {
//						break;
//					}
//					// 다른 섬을 만나면 다리 생성
//					else if (map[r + tempR][c + tempC] != 0) {
//						if (blength > 1) {
//							pq.push(Edge{ now_S, map[r + tempR][c + tempC], blength }); // 다리 추가
//						}
//						break;
//					}
//					else {
//						blength++; // 바다를 만나면 다리 길이 증가
//					}
//
//					// 4방향 계속 탐색
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
//	// 부모 배열 초기화
//	parents.resize(sNum);
//
//	for (int i = 0; i < parents.size(); i++) {
//		parents[i] = i;
//	}
//
//	int useEdge = 0; // 사용한 간선 개수
//	int result = 0; // 총 비용
//
//	// 크루스칼 알고리즘으로 최소 신장 트리 만들기
//	while (!pq.empty()) {
//		Edge now = pq.top(); // 최소 다리 가져오기
//		pq.pop();
//
//		// 서로 다른 두 섬을 연결할 수 있으면 연결
//		if (Find(now.s) != Find(now.e)) {
//			Union(now.s, now.e); // 두 섬을 연결
//			result += now.v; // 다리 길이 더하기
//			useEdge++; // 사용한 간선 개수 증가
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