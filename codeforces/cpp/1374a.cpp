/*	
	A. Required Remainder
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int x, y, n;
		scanf("%d %d %d", &x, &y, &n);
		int mod = n%x;
		if (mod >= y)
			printf("%d\n", n-(mod-y));
		else
			printf("%d\n", n-(mod+x-y));
	}

	return 0;
}
