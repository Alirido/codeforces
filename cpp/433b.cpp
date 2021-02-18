/*
	B. Kuriyama Mirai's Stones
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	unsigned long long dp[n], odp[n]; // odp = ordered dp
	for (int i=0; i<n; ++i) {
		// scanf("%d", odp[i]);
		cin >> odp[i];
		if (i==0)
			dp[i]=odp[i];
		else 
			dp[i]=dp[i-1]+odp[i];
	}
	sort(odp, odp+n);
	for (int i=1; i<n; ++i) {
		odp[i]+=odp[i-1];
	}
	int m;
	scanf("%d", &m);
	while (m--) {
		int t, l, r;
		scanf("%d%d%d", &t, &l, &r);
		if (t==1) {
			if (l==1)
				cout << dp[r-1] << endl;
			else cout << dp[r-1]-dp[l-2] << endl;
		} else {
			if (l==1)
				cout << odp[r-1] << endl;
			else cout << odp[r-1]-odp[l-2] << endl;
		}
	}

	return 0;
}