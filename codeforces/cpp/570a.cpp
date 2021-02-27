/*	
	A. Elections
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[101];

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int imax,max;
	for (int i=0; i<m; i++) {
		max=-1;
		for (int j=0; j<n; j++) {
			int x;
			scanf("%d", &x);
			if (x>max) {
				max = x;
				imax = j;
			}
		}
		a[imax]++;
	}
	max = -1;
	for (int i=0; i<n; i++) {
		if (a[i]>max) {
			imax = i;
			max = a[i];
		}
	}
	printf("%d\n", imax+1);

	return 0;
}