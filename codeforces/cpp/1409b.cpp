/*	
	B. Minimum Product
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
		ll a, b, x, y, n;
		scanf("%lld %lld %lld %lld %lld", &a, &b, &x, &y, &n);

		// the first possibility
		ll p, np = n;
		if (np > a-x) {
			np -= a-x;
			if (np >= b-y)
				p = x * y;
			else
				p = x * (b-np);
		} else 
			p = (a-np) * b;

		// the second possibility
		ll q, nq = n;
		if (nq > b-y) {
			nq -= b-y;
			if (nq >= a-x)
				q = x * y;
			else
				q = (a-nq) * y;
		} else 
			q = a * (b-nq);

		printf("%lld\n", min(p, q));
	}

	return 0;
}