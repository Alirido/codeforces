/*
	A. Police Recruits
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x;
	scanf("%d", &n);
	int crime=0, event=0;
	for (i=1; i<=n; i++) {
		scanf("%d", &x);
		event += x;
		if (event<0) {
			crime++;
			event=0;
		} 
	}
	printf("%d\n", crime);
	return 0;
}