/*
	A. Mishka and Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	int m=0, c=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a<b) {
			c++;
		} else if (a>b) {
			m++;
		}
	}
	if (m>c) {
		printf("Mishka\n");
	} else if (m<c) {
		printf("Chris\n");
	} else {
		printf("Friendship is magic!^^\n");
	}

	return 0;
}