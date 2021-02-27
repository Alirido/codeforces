/*	
	A. Soft Drinking
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
	printf("%d\n", min(min(k*l/nl, c*d), p/np)/n);

	return 0;
}