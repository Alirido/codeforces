/*
	A. Duff and Meat
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, a, p;
	scanf("%d", &n);
	int cost, min;
	scanf("%d %d", &a, &min);
	cost = a*min;
	for (i=2; i<=n; i++) {
		scanf("%d %d", &a, &p);
		if (min>p) {
			min=p;
		}
		cost += a*min;
	}
	printf("%d\n", cost);
	return 0;
}