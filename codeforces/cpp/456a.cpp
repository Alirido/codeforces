/*	
	A. Laptops
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	bool happy=false;
	for (int i=0; i<n; i++) {
		scanf("%d %d", &a[i], &b[i]);
		if (!happy) {
			if (a[i]!=b[i]) {
				happy = true;
			}
		}
	}
	if (happy) {
		printf("Happy Alex\n");
	} else {
		printf("Poor Alex\n");
	}
	return 0;
}