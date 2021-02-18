/*	
	A. Supermarket
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	float min=50000;
	while (n--) {
		int a,b;
		scanf("%d%d", &a, &b);
		if (a/(float)b < min)
			min = a/(float)b;
	}
	printf("%.8f\n", min*m);

	return 0;
}