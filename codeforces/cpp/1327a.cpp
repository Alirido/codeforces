/*	
	A. Sum of Odd Integers
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
		ll n, k;
		scanf("%lld %lld", &n, &k);
		if ((k%2 == 0 && n%2 == 1) || (k%2 == 1 && n%2 == 0))
			printf("NO\n");
		else {
			if (n >= k*k)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}