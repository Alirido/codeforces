/*	
	B. Gifts Fixing
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
		int a[n], b[n];
		int mina = 1000000009;
		int minb = 1000000009;
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			if (a[i] < mina)
				mina = a[i];
		}
		for (int i=0; i<n; i++) {
			scanf("%d", &b[i]);
			if (b[i] < minb)
				minb = b[i];
		}
		ll moves = 0;
		for (int i=0; i<n; i++) {
			if (a[i] > mina && b[i] > minb) {
				int eata = a[i] - mina;
				int eatb = b[i] - minb;
				if (eata > eatb) {
					moves += eatb;
					a[i] -= eatb;
					b[i] -= eatb;
				} else {
					moves += eata;
					a[i] -= eata;
					b[i] -= eata;
				}
			}
			if (a[i] > mina) {
				int eata = a[i] - mina;
				moves += eata;
				a[i] -= eata;
			} else if (b[i] > minb) {
				int eatb = b[i] - minb;
				moves += eatb;
				b[i] -= eatb;
			}
		}
		printf("%lld\n", moves);
	}

	return 0;
}