/*	
	A. Mahmoud and Ehab and the MEX
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[101];

int main() {
	int n,x;
	scanf("%d%d", &n, &x);
	int ans=0;
	for (int i=0; i<n; i++) {
		int d;
		scanf("%d", &d);
		a[d]++;
	}
	ans += a[x];
	for (int i=0; i<x; i++) {
		if (a[i]==0) ans++;
	}
	printf("%d\n", ans);

	return 0;
}