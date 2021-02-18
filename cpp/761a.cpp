/*	
	A. Dasha and Stairs
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	if (a!=0 || b!=0) {	
		if (abs(a-b)<=1)
			puts("YES");
		else
			puts("NO");
	} else {
		puts("NO");
	}

	return 0;
}