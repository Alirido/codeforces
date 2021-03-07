/*	
	C. Board Moves
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		ll ans = 0;
		for (ll i=n; i>1; i-=2) {
			ans += (i*4-4)*(i/2);
		}
		printf("%lld\n", ans);
	}

	return 0;
}