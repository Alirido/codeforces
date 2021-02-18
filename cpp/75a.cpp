/*	
	A. Life Without Zeros
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int c = a+b;
	int ta=0, tb=0, tc=0, support=1;
	while (a>0) {
		if (a%10 != 0) {
			ta += (a%10)*support;
			support*=10;
		}
		a/=10;
	}
	support=1;
	while (b>0) {
		if (b%10 != 0) {
			tb += (b%10)*support;
			support*=10;
		}
		b/=10;
	}
	support=1;
	while (c>0) {
		if (c%10 != 0) {
			tc += (c%10)*support;
			support*=10;
		}
		c/=10;
	}
	if (ta+tb==tc)
		puts("YES");
	else puts("NO");

	return 0;
}