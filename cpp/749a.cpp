/*	
	A. Bachgold Problem
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", n/2);
	for (int i=0; i<n/2-1; i++) {
		printf("2 ");
	}
	if (n%2 == 0) {
		printf("2\n");
	} else {
		printf("3\n");
	}

	return 0;
}