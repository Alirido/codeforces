/*	
	A. Frog Jumping
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
		ll a, b, k;
		scanf("%lld %lld %lld", &a, &b, &k);
		ll dif = a-b;
		if (k&1 == 1)
			printf("%lld\n", dif*(k/2) + a);
		else
			printf("%lld\n", dif * (k/2));
	}

	return 0;
}