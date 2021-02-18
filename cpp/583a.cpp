/*	
	A. Asphalting Roads
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int h[51], v[51];

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n*n; i++) {
		int a,b;
		scanf("%d%d", &a, &b);
		if (h[a]==0 && v[b]==0) {
			printf("%d ", i+1);
			h[a]++; v[b]++;
		}
	}

	return 0;
}