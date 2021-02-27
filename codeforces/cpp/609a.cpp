/*
	A. USB Flash Drives
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d\n%d", &n, &m);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n, greater<int>());
	int i=0, sum=0;
	while (sum<m) {
		sum += a[i];
		++i;
	}
	printf("%d\n", i);

	return 0;
}