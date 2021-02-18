/*	
	A. The Number of Positions
	Time limit 0.5 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,b;
	scanf("%d%d%d", &n, &a, &b);
	if (n-a<=b) {
		printf("%d\n", n-a);
	} else {
		printf("%d\n", b+1);
	}

	return 0;
}