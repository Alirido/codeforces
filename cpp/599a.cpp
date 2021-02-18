/*
	A. Patrick and Shopping
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a+b) < c) {
		printf("%d\n", 2*(a+b));
	} else {
		if ((a+c) < b) {
			printf("%d\n", 2*(a+c));
		} else {
			if ((b+c) < a) {
				printf("%d\n", 2*(b+c));
			} else {
				printf("%d\n", a+b+c);
			}
		}
	}

	return 0;
}