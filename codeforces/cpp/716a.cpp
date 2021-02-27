/*
	A. Crazy Computer
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	int next, previous, count=1;
	scanf("%d", &previous);
	for (int i=1; i<n; i++) {
		scanf("%d", &next);
		if (next-previous<=c) {
			count++;
		} else {
			count = 1;
		}
		previous = next;	
	}
	printf("%d\n", count);

	return 0;
}