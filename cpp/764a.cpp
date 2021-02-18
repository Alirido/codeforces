/*	
	A. Taymyr is calling you
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, z;
	scanf("%d%d%d", &n, &m, &z);
	printf("%d\n", z/(n*m/__gcd(n, m)));

	return 0;
}