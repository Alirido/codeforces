/*
	A. Game Shopping
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n], b[m], i=0;
	for (; i<n; ++i)
		scanf("%d", &a[i]);
	for (i=0; i<m; ++i)
		scanf("%d", &b[i]);
	i=0;
	int j=0, ans=0;
	while (i<m && j<n) {
		if (b[i]>=a[j]) {
			ans++;
			++i;
		}
		j++;
	}
	printf("%d\n", ans);

	return 0;
}