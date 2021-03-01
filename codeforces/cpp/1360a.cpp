/*	
	A. Minimal Square
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a < b) {
			if (2*a > b)
				printf("%d\n", 4*a*a);
			else
				printf("%d\n", b*b);
		} else {
			if (2*b > a)
				printf("%d\n", 4*b*b);
			else
				printf("%d\n", a*a);
		}
	}

	return 0;
}