/*	
	A. Vitya in the Countryside
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	if (n==1) {
		if (a[0] == 15) {
			printf("DOWN\n");
		} else if (a[0] == 0) {
			printf("UP\n");
		} else {
			printf("-1\n");
		}
	} else {
		if (a[n-2]>a[n-1]) {
			if (a[n-1] == 0) {
				printf("UP\n");
			} else {
				printf("DOWN\n");
			}
		} else {
			if (a[n-1] == 15) {
				printf("DOWN\n");
			} else {
				printf("UP\n");
			}
		}
	}

	return 0;
}