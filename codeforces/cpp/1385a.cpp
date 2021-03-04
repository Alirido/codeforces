/*	
	A. Three Pairwise Maximums
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if (x == y && y == z)
			printf("YES\n%d %d %d\n", x, y, z);
		else if (x == y && x > z)
			printf("YES\n%d %d %d\n", x, z, z);
		else if (x == z && x > y)
			printf("YES\n%d %d %d\n", x, y, y);
		else if (y == z && y > x)
			printf("YES\n%d %d %d\n", y, x, x);
		else
			printf("NO\n");
	}

	return 0;
}