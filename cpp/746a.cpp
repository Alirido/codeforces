/*	
	A. Compote
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int x = floor(min(min(a/1.0, b/2.0), c/4.0));
	printf("%d\n",7*x);

	return 0;
}