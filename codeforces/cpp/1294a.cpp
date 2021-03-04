/*	
	A. Collecting Coins 
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, c, n;
		scanf("%d %d %d %d", &a, &b, &c, &n);
		int mx = max(max(a,b), c);
		if (mx > a) 
			n -= mx-a;
		if (mx > b)
			n -= mx-b;
		if (mx > c)
			n -= mx-c;

		if (n < 0)
			printf("NO\n");
		else {
			if (n%3 == 0)
				printf("YES\n");
			else printf("NO\n");
		}
	}

	return 0;
}