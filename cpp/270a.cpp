/*
	A. Fancy Fence
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, i;
	scanf("%d", &t);
	int a;
	for (i=1; i<=t; i++) {
		scanf("%d", &a);
		if (360%(180-a)==0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}