/*	
	A. Orac and Factors
	Time limit 2 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	map<ll, ll> memo;
	while (t--) {
		ll n, k;
		scanf("%lld %lld", &n, &k);
		if ((n&1) == 0)
			printf("%lld\n", n+(2*k));
		else {
			if (memo.count(n))
				printf("%lld\n", n+memo[n]+2*(k-1));
			else {
				ll i=3;
				while (n%i != 0 && i*i<=n) i+=2;
				if (i*i > n) {
					memo[n] = n;
					printf("%lld\n", n + n + (2*(k-1)));
				} else {
					memo[n] = i;
					printf("%lld\n", n + i + (2*(k-1)));
				}
			}
		}
	}

	return 0;
}