/*	
	B. Vasya and Cornfield
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	scanf("%d%d", &n, &d);
	int m;
	scanf("%d", &m);
	while (m--) {
		int x,y;
		scanf("%d%d", &x, &y);
		if ((y-x)<=d && (x+y)<=2*n-d && (x-y)<=d && (x+y)>=d)
			printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}