/*	
	B. Same Parity Summands
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		if (n < k)
			printf("NO\n");
		else if (n&1) { // if n is an odd number
			if (k&1) { // if k is an odd number
				printf("YES\n");
				for (int i=0; i<k-1; i++) {
					printf("1 ");
				}
				printf("%d\n", n-(k-1));
			} else
				printf("NO\n");
		} else {
			if (k&1) {
				if (k*2 <= n) {
					printf("YES\n");
					for (int i=0; i<k-1; i++) {
						printf("2 ");
					}
					printf("%d\n", n-2*(k-1));
				} else
					printf("NO\n");
			} else {
				printf("YES\n");
				for (int i=0; i<k-1; i++) {
					printf("1 ");
				}
				printf("%d\n", n-(k-1));
			}
		}
	}

	return 0;
}