/*	
	A. Pasha and Stick
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n%2==1) putchar('0');
	else printf("%d\n", (n-1)/4);

	return 0;
}