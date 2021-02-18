/*	
	B. Sale
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int sum=0, i=0;
	while (i<m && a[i++]<0)
		sum += a[i-1];
	printf("%d\n", abs(sum));

	return 0;
}