/*	
	B. Multyply by 2, divide by 6
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int div3 = 0, div2 = 0;
		while (n%3 == 0) {
			n /= 3;
			div3++;
		}
		while (n%2 == 0) {
			n /= 2;
			div2++;
		}

		if (n == 1) {
			if (div2 == div3)
				printf("%d\n", div3);
			else if (div2 > div3)
				printf("-1\n");
			else
				printf("%d\n", div3-div2+div3);
		} else
			printf("-1\n");
	}

	return 0;
}