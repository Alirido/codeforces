/*	
	A. Arya and Bran
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	int a[n+1], temp=0;
	for (int i=1; i<=n; ++i) {
		scanf("%d", &a[i]);
		a[i] += temp;
		if (a[i]>8) {
			temp = a[i]-8;
			a[i] -= temp;
		} else {
			temp = 0;
		}
	}
	int i=1;
	while (k>0 && i<=n) {
		k -= a[i];
		++i;
	}
	if (k>0)
		puts("-1");
	else printf("%d\n", i-1);

	return 0;
}