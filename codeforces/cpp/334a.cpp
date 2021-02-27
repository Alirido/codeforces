/*	
	A. Candy Bags
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int i=1;
	while (i<=n*n/2) {
		for (int j=0; j<n/2; ++j) {
			printf("%d %d ", i, n*n-i+1);
			++i;
		} printf("\n");
	}

	return 0;
}