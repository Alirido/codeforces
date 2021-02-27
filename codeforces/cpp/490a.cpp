/*
	A. Team Olympiad
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	int pr[n+1], mt[n+1], pe[n+1];
	pr[0]=0; mt[0]=0; pe[0]=0;
	for (i=1; i<=n; i++) {
		int t, ix;
		scanf("%d", &t);
		if (t==1) {
			pr[0]++;
			ix=pr[0];
			pr[ix]=i;
		} else if (t==2) {
			mt[0]++;
			ix=mt[0];
			mt[ix]=i;
		} else {
			pe[0]++;
			ix=pe[0];
			pe[ix]=i;
		}
	}
	int tim = min(min(pr[0], mt[0]), pe[0]);
	printf("%d\n", tim);
	for (i=1; i<=tim ;i++) {
		printf("%d %d %d\n", pr[i], mt[i], pe[i]);
	}
	return 0;
}