/*	
	D. Flowers
	Time limit 1.5 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
int dp[100001];

int main() {
	int t,k;
	scanf("%d%d", &t, &k);
	for (int i=0; i<k; ++i) {
		dp[i]=1;
	}
	for (int i=k; i<=100000; i++) {
		dp[i]=(dp[i-1]+dp[i-k])%mod;
	}
	for (int i=2; i<=100000; i++) {
		dp[i]=(dp[i]+dp[i-1])%mod;
	}
	dp[0]=0;
	while (t--) {
		int a,b;
		scanf("%d%d", &a, &b);
		printf("%d\n", (dp[b]-dp[a-1]+mod)%mod);
	}

	return 0;
}