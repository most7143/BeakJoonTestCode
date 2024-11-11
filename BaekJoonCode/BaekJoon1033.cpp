//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <queue>
//using namespace std;
//
//long long ans[10];
////tuple�� �̿��� 3���� ���� ������ ���ֵ��� ����
//vector <tuple<int, int, int>> adj[10];
//bool visited[10];
//
////��Ŭ���� ȣ������ �̿��� �ִ� ����� ���ϴ� �Լ�
//long long GCD(long long a, long long b) {
//	if (b == 0) return a;
//	return GCD(b, a % b);
//}
//
//void DFS(int node)
//{
//	visited[node] = true;
//
//	for (tuple<int, int, int> i : adj[node])
//	{
//		int next = get<0>(i);
//
//		if (false == visited[next])
//		{
//			ans[next] = ans[node] * get<2>(i) / get<1>(i);
//			DFS(next);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	long long tot_lcm = 1;
//	cin >> n;
//
//	//Ʈ���������� �̾��� �� �ֵ��� ����
//	for (int i = 0; i < n - 1; i++) {
//		long long a, b, p, q;
//		cin >> a >> b >> p >> q;
//		adj[a].push_back({ b, p, q });
//		adj[b].push_back({ a, q, p });
//		tot_lcm *= p * q / GCD(p, q);
//	}
//
//	ans[0] = tot_lcm;
//	DFS(0);
//	long long ans_gcd = ans[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		ans_gcd = GCD(ans_gcd, ans[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << ans[i] / ans_gcd << ' ';
//	}
//}