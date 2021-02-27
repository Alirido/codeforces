/*	
	A. Little Pony and Crystal Mine
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; i += 2) {
		int j;
		for (j=1; j<=(n-i)/2; ++j) putchar('*');
		int printD=j;
		for (; j<printD+i; ++j) putchar('D');
		for (; j<=n; ++j) putchar('*');
		printf("\n");
	}
	for (int i=n-2; i>=1; i -= 2) {
		int j;
		for (j=1; j<=(n-i)/2; ++j) putchar('*');
		int printD=j;
		for (; j<printD+i; ++j) putchar('D');
		for (; j<=n; ++j) putchar('*');
		printf("\n");
	}

	return 0;
}