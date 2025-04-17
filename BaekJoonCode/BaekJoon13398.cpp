//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
////점화식을 이용한 문제 해결
////왼쪽과 오른쪽 두 번 점화식을 계산한다.
//
//int N;
//vector<int> A, L, R;
//
//int main()
//{
//	cin >> N;
//
//	A.resize(N);
//	L.resize(N);
//	R.resize(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//
//	L[0] = A[0];
//
//	int result = L[0];
//
//	for (int i = 1; i < N; i++)
//	{
//		//현재 A[i]와 이전 수를 더한 값이 더 큰지 검사 후 L[i]에 설정한다.
//		L[i] = max(A[i], L[i - 1] + A[i]);
//
//		//제거를 안하는 경우일때는  기본 최대값을 저장.
//		result = max(result, L[i]);
//	}
//
//	R[N - 1] = A[N - 1];
//
//	for (int i = N - 2; i >= 0; i--)
//	{
//		//현재 A[i]와 이전 수를 더한 값이 더 큰지 검사 후 R[i]에 설정한다.
//		R[i] = max(A[i], R[i + 1] + A[i]);
//	}
//
//	for (int i = 1; i < N - 1; i++)
//	{
//		//i번째 수를 삭제 했을때의 최대값을 temp에 넣는다.
//		int temp = L[i - 1] + R[i + 1];
//
//		result = max(result, temp);
//	}
//
//	cout << result;
//}