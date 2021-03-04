/*	
	A. FashionabLee
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
		printf("%s\n", (90*n)%360 ? "NO" : "YES");
	}

	return 0;
}