/*
	A. New Year Transportation
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, i;
	int a[30002];
	
	scanf("%d %d", &n, &t);
	for (i=1; i<n; i++) {
		scanf("%d", &a[i]);
	}
	i=1;
	while (i<t) {
		i=i+a[i];
	}
	if (i==t) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}
