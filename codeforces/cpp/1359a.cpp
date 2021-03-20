/*	
	A. Berland Poker
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m, k;
		scanf("%d %d %d", &n, &m, &k);
		int holdedCard = n/k;
		if (holdedCard > m)
			printf("%d\n", m);
		else
			printf("%d\n", holdedCard - int(ceil(float(m-holdedCard)/(k-1))));
	}

	return 0;
}