/*	
	A. Road To Zero
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
		ll x, y, a, b;
		scanf("%lld %lld", &x, &y);
		scanf("%lld %lld", &a, &b);
		if (2*a < b) {
			printf("%lld\n", x*a + y*a);
		} else {
			if (x < y)
				printf("%lld\n", x*b + (y-x)*a);
			else
				printf("%lld\n", y*b + (x-y)*a);
		}
	}

	return 0;
}