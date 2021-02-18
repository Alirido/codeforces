/*	
	A. Drazil and Date
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,s;
	scanf("%d%d%d", &a, &b, &s);
	int t= abs(a) + abs(b);
	if (s-t<0) {
		puts("NO");
	} else {
		if ((s-t)%2 == 0) {
			puts("YES");
		} else {
			puts("NO");
		}
	}

	return 0;
}