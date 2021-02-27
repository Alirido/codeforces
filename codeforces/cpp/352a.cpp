/*	
	A. Jeff and Digits
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[7];

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	a[5] -= a[5]%9;
	if (a[5]==0) {
		if (a[0]==0)
			puts("-1");
		else putchar('0');
	} else {
		if (a[0]==0)
			puts("-1");
		else {	
			while(a[5]--) putchar('5');
			while(a[0]--) putchar('0');
		}
	}

	return 0;
}