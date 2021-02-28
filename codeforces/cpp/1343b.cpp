/*	
	B. Balanced Array
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
		if ((n/2)%2 == 1)
			printf("NO\n");
		else {
			printf("YES\n");
			for (int i=1; i<=n/2; i++) {
				printf("%d ", i*2);
			}
			int odd=1;
			for (int i=1; i<n/2; i++) {
				printf("%d ", odd);
				odd += 2;
			}
			printf("%d\n", odd+n/2);
		}
	}

	return 0;
}