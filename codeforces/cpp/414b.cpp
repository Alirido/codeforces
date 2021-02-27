/*
	B. Mashmokh and ACM
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;
int a[2001];
unsigned long long ans=0;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	if (k==1)
		printf("%d\n", n);
	else {
		for (int i=1; i<=n; ++i) {
			a[i] += n/i;
		}
		for (int i=3; i<=k; ++i) {
			for (int j=1; j<=n; j++) {
				int inc=j;
				for (int idx=j+j; idx<=n; idx+=inc) {
					a[j]=(a[j]+a[idx])%mod;
				}
			}
		}
		for (int i=1; i<=n; ++i) {
			ans = (ans+a[i])%mod;
		}
		cout << ans;
	}

	return 0;
}