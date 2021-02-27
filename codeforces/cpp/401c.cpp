/*
	C. Team
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n>(n+m+1)/2 || n<(n+m)/3)
		printf("-1");
	else {
		if (n>m) {
			for (int i=1; i<=n+m; ++i) {
				if (i%2==1)
					putchar('0');
				else putchar('1');
			}
		} else {
			while (m>0 || n>0) {
				if (m>n) {
					putchar('1');
					m--;
					if (m>0) {
						putchar('1');
						m--;
					}
					if (n>0) {
						putchar('0');
						n--;
					}
				} else if (m==n) {
					putchar('1');
					m--;
				} else {
					putchar('0');
					n--;
				}
			}
		}
	}

	return 0;
}