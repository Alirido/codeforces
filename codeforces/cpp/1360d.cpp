/*	
	D. Buying Shovels
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k >= n)
			cout << 1 << endl;
		else {
			int ans=n;
			for (int i=2; i*i<=n; i++) {
				if (n%i == 0) {
					if (n/i <= k)
						ans = min(ans, i);
					if (i <= k)
						ans = min(ans, n/i);
				}
			}
			cout << ans << endl;
		}
	}

	return 0;
}