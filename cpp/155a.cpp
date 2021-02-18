/*
	A. I_love_%username%
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x;
	int amazing=0, top, bottom;
	scanf("%d", &n);
	scanf("%d", &x); bottom=x; top=x;
	for (i=2; i<=n; i++) {
		scanf("%d", &x);
		if (x>top) {
			amazing++;
			top=x;
		} else if (x<bottom) {
			amazing++;
			bottom=x;
		} 
	}
	printf("%d\n", amazing);
	return 0;
}
