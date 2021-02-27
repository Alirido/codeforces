/*
	A. Multiplication Table
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x;
	scanf("%d %d", &n, &x);
	int count=0;
	i=1;
	while (i*i < x && i<=n) {
		if (x%i == 0) {
			if ((x/i) <= n) {
				count += 2;
			}
		}
		i++;
	}
	if (i*i == x && i<=n)
		count++;
	printf("%d\n", count);

	return 0;
}