/*
	A. Left-handers, Right-handers and Ambidexters
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int l,r, a;
	scanf("%d%d%d", &l, &r, &a);
	if (l<r) {
		if (a <= r-l) {
			printf("%d\n", 2*(l+a));
			return 0;
		} else {
			a -= r-l;
			printf("%d\n", 2*(r+(a/2)));
			return 0;
		}
	} else if (l>r) {
		if (a <= l-r) {
			printf("%d\n", 2*(r+a));
			return 0;
		} else {
			a -= l-r;
			printf("%d\n", 2*(l+(a/2)));
			return 0;
		}
	} else printf("%d\n", 2*(a/2 + l));

	return 0;
}