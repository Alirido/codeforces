/*	
	A. Fix and Number Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int fpb(int x, int y) {
	return (y==0? x : fpb(y, x%y));
}

int main() {
	int n;
	scanf("%d", &n);
	int gcd;
	scanf("%d", &gcd);
	for (int i=1; i<n; i++) {
		int x; 
		scanf("%d", &x);
		gcd = fpb(gcd, x);
	}
	printf("%d\n", n*gcd);

	return 0;
}