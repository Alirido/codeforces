/*	
	A. Infinite Sequence
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (c==0) {
		if (a==b)
			puts("YES");
		else puts("NO");
	} else {
		if ((b-a)%c == 0 && (b-a)/c >= 0) 
			puts("YES");
		else puts("NO");
	}

	return 0;
}