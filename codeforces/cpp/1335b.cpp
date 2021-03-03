/*	
	B. Construct the String
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, a, b;
		scanf("%d %d %d", &n, &a, &b);
		char c[a];
		char tmp = 'a';
		for (int i=0; i<a; i++) {
			if (b > 1) {
				c[i] = tmp;
				tmp++;
				b--;
			} else {
				c[i] = tmp;
			}
		}
		for (int i=0; i<n; i++) {
			printf("%c", c[i%a]);
		}
		printf("\n");
	}

	return 0;
}