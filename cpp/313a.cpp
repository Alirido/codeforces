/*
	A. Ilya and Bank Account
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n>0) {
		printf("%d\n", n);
	} else {
		n = n*(-1);
		int a, b;
		a = (n/10)%10;
		b = n%10;
		if (a<b) {
			n = n/10;
		} else {
			n = (n/10) - a + b;
		}
		printf("%d\n", n*(-1));
	}
	return 0;
}
