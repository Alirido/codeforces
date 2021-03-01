/*	
	A. Candies
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
		int divider = 3;
		int i=2;
		while (n%divider != 0) {
			i *= 2;
			divider += i;
		}
		printf("%d\n", n/divider);
	}

	return 0;
}