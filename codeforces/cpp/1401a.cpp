/*	
	A. Distance and Axis
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
		if (k >= n)
			printf("%d\n", k-n);
		else {
			int div = n%2;
			if (k%2 == div)
				printf("0\n");
			else
				printf("1\n");
		}
	}

	return 0;
}