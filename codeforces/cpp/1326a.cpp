/*	
	A. Bad Ugly Numbers
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
		if (n==1)
			printf("-1\n");
		else {
			printf("2");
			for (int i=1; i<n; i++) {
				printf("3");
			}
			printf("\n");
		}
	}

	return 0;
}