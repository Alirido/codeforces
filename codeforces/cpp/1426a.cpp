/*	
	A. Floor Number
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, x;
		scanf("%d %d", &n, &x);
		if (n <= 2)
			printf("1\n");
		else {
			n-=2;
			if (n%x == 0)
				printf("%d\n", n/x + 1);
			else
				printf("%d\n", n/x + 2);
		}
	}

	return 0;
}