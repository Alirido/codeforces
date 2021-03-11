/*	
	A. Natstya and Rice
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, a, b, c, d;
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		int minweight = (a-b)*n;
		int maxweight = (a+b)*n;
		int minpos = c-d;
		int maxpos = c+d;
		if (minweight > maxpos || maxweight < minpos)
			printf("No\n");
		else
			printf("Yes\n");
	}

	return 0;
}