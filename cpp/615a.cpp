/*	
	A. Bulbs
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[101];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	while (n--) {
		int x;
		scanf("%d", &x);
		for (int i=0; i<x; i++) {
			int t;
			scanf("%d", &t);
			a[t]++;
		}
	}
	int i=1; bool can=true;
	while (i<=m && can) {
		if (a[i]==0)
			can=false;
		else
			i++;
	}
	if (can)
		puts("YES");
	else
		puts("NO");

	return 0;
}