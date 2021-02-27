/*	
	A. Little C Loves 3 I
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n%3<2)
		printf("%d %d %d\n", 1, 1, n-2);
	else printf("%d %d %d\n", 1, 2, n-3);

	return 0;
}