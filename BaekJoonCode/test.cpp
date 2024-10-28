#include <bits/stdc++.h>
#include <utility>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

#include <iostream>
/*
 * Complete the 'nodeDistance' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts UNWEIGHTED_INTEGER_GRAPH s as parameter.
 */

 /*
  * For the unweighted graph, <name>:
  *
  * 1. The number of nodes is <name>_nodes.
  * 2. The number of edges is <name>_edges.
  * 3. An edge exists between <name>_from[i] and <name>_to[i].
  *
  */

vector<int> nodeDistance(int s_nodes, vector<int> s_from, vector<int> s_to) {
	// 그래프를 인접 리스트 형태로 구성
	unordered_map<int, vector<int>> graph;
	for (size_t i = 0; i < s_from.size(); ++i) {
		graph[s_from[i]].push_back(s_to[i]);
		graph[s_to[i]].push_back(s_from[i]);
	}

	vector<int> distances(s_nodes + 1, -1); // 거리 초기화
	vector<bool> inCycle(s_nodes + 1, false);
	vector<bool> visited(s_nodes + 1);

	// DFS로 순환 구조 탐지
	function<bool(int, int)> dfs = [&](int node, int parent) {
		visited[node] = true;
		for (int neighbor : graph[node]) {
			if (neighbor == parent) continue; // 부모 노드는 무시
			if (visited[neighbor]) {
				// 순환 구조 발견
				inCycle[node] = true;
				return true; // 순환을 발견하면
			}
			if (dfs(neighbor, node)) {
				inCycle[node] = true; // 자식 노드가 순환에 속할 경우
			}
		}
		return false;
		};

	for (int i = 1; i <= s_nodes; ++i) {
		if (!visited[i]) {
			dfs(i, -1);
		}
	}

	// 거리 계산을 위한 BFS
	queue<int> q;
	for (int i = 1; i <= s_nodes; ++i) {
		if (inCycle[i]) {
			distances[i] = 0; // 순환 구조의 노드는 거리 0
			q.push(i);
		}
	}

	// BFS를 통해 거리 계산
	while (!q.empty()) {
		int current = q.front();
		q.pop();

		for (int neighbor : graph[current]) {
			if (distances[neighbor] == -1) { // 아직 거리 정보가 없는 경우
				distances[neighbor] = distances[current] + 1; // 거리 계산
				q.push(neighbor);
			}
		}
	}

	// 결과 반환: 인덱스를 맞추기 위해 0을 생략
	return vector<int>(distances.begin() + 1, distances.end());
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s_nodes_edges_temp;
	getline(cin, s_nodes_edges_temp);

	vector<string> s_nodes_edges = split(rtrim(s_nodes_edges_temp));

	int s_nodes = stoi(s_nodes_edges[0]);
	int s_edges = stoi(s_nodes_edges[1]);

	vector<int> s_from(s_edges);
	vector<int> s_to(s_edges);

	for (int i = 0; i < s_edges; i++) {
		string s_from_to_temp;
		getline(cin, s_from_to_temp);

		vector<string> s_from_to = split(rtrim(s_from_to_temp));

		int s_from_temp = stoi(s_from_to[0]);
		int s_to_temp = stoi(s_from_to[1]);

		s_from[i] = s_from_temp;
		s_to[i] = s_to_temp;
	}

	vector<int> result = nodeDistance(s_nodes, s_from, s_to);

	for (size_t i = 0; i < result.size(); i++) {
		fout << result[i];

		if (i != result.size() - 1) {
			fout << "\n";
		}
	}

	fout << "\n";

	fout.close();

	return 0;
}

string ltrim(const string& str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string& str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string& str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}