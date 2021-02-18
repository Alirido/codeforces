/*
	A. Vanya and Fence
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, i, x;
	int width=0;
	scanf("%d %d", &n, &h);
	for (i=1; i<=n; i++) {
		scanf("%d", &x);
		if (x<=h) {
			width++;
		} else {
			width +=2;
		}
	}
	printf("%d\n", width);
	return 0;
}
