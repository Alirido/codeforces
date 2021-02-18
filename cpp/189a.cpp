/*
	A. Cut Ribbon
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 0;
	fill(dp+1, dp+n+1, -10000);
	for (int i=0; i<3; i++) {
		int a;
		cin >> a;
		for (int j=a; j<=n; j++) {
			dp[j] = max(dp[j], dp[j-a]+1);
		}
	}
	cout << dp[n] << endl;

	return 0;
}