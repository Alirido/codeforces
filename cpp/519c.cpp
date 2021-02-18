/*	
	C. A and B and Team Training
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n>m) {
		if (n>2*m)
			printf("%d\n", m);
		else
			printf("%d\n", (n+m)/3);
	} else {
		if (m>2*n)
			printf("%d\n", n);
		else
			printf("%d\n", (n+m)/3);
	}

	return 0;
}