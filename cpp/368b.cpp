/*	
	B. Sereja and Suffixes
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int dp[100001];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	map<int, int> mp;
	for (int i=n-1; i>=0; i--) {
		mp[a[i]]++;
		dp[i] = dp[i+1];
		if (mp[a[i]] == 1) {
			dp[i]++;
		}
	}
	for (int i=0; i<m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d\n", dp[x-1]);
	}

	return 0;
}