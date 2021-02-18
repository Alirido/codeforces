/*
	A. Brain's Photos
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, j;
	char x;
	scanf("%d %d", &n, &m);
	bool colored=false;
	for (i=1; i<=n; i++) {
		for (j=1; j<=m; j++) {
			char sp;
			scanf("%c", &sp);
			scanf("%c", &x);
			if (!colored) {
				if (x=='C' || x=='M' || x=='Y') {
					colored=true;
				}
			}
		}
	}
	if (colored) {
		printf("#Color\n");
	} else {
		printf("#Black&White\n");
	}
	return 0;
}