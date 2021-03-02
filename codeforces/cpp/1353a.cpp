/*	
	A. Most Unstable Array
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		if (n == 1)
			printf("0\n");
		else if (n == 2)
			printf("%d\n", m);
		else
			printf("%d\n", m*2);
	}

	return 0;
}