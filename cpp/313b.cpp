/*	
	B. Ilya and Queries
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int dp[s.length()], sum=0;
	dp[0]=0;
	for (int i=1; i<s.length(); i++) {
		if (s[i-1] == s[i]) {
			sum++;
			dp[i]=sum;
		} else {
			dp[i] = dp[i-1];
		}
	}
	int m;
	scanf("%d", &m);
	for (int i=0; i<m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", dp[y-1]-dp[x-1]);
	}

	return 0;
}
