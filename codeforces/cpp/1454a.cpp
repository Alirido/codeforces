/*	
	A. Special Permutation
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i=2; i<=n; i++) {
			printf("%d ", i);
		}
		printf("1\n");
	}

	return 0;
}