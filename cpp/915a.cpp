/*	
	A. Garden
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	bool get=false; int i=n-1;
	while (!get && i>=0) {
		if (k%a[i]==0) {
			printf("%d\n", k/a[i]);
			get=true;
		} else --i;
	}

	return 0;
}