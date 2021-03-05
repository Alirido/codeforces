/*	
	A. Odd Divisor
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll n;
		scanf("%lld", &n);
		if (n%2 == 1)
			printf("YES\n");
		else {
			while (n%2 == 0) n/=2;
			printf("%s\n", n > 1 ? "YES" : "NO");
		}
	}

	return 0;
}