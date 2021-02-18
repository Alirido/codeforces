/*
	B.Drinks
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x, sum=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		scanf("%d", &x);
		sum += x;
	}
	double result = (double) sum/(double)n;
	printf("%.12f\n", result);
	return 0;
}
