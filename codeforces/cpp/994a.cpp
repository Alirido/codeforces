/*	
	A. Fingerprints
	Time limit 1 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool b[10];

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	while (m--) {
		int x;
		scanf("%d", &x);
		b[x]=true;
	}
	for (int i=0; i<n; i++) {
		if (b[a[i]])
			printf("%d ", a[i]);
	}

	return 0;
}