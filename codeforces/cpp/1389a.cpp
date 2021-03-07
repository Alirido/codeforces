/*	
	A. LCM Problem
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int l, r;
		scanf("%d %d", &l, &r);
		if (l*2 <= r)
			printf("%d %d\n", l, 2*l);
		else printf("-1 -1\n");
	}

	return 0;
}