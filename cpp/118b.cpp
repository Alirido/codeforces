/*
	B. Present from Lena
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<=n; i++) {
		int j;
		for (j=1; j<=(n-i)*2; j++) {
			printf(" ");
		}
		for (j=0; j<i; j++) {
			printf("%d ", j);
		}
		for (j=i; j>=0; j--) {
			if (j==0) {
				printf("0\n");
			} else {
				printf("%d ", j);
			}
		}
	}
	for (int i=n-1; i>=0; i--) {
		int j;
		for (j=1; j<=(n-i)*2; j++) {
			printf(" ");
		}
		for (j=0; j<i; j++) {
			printf("%d ", j);
		}
		for (j=i; j>=0; j--) {
			if (j==0) {
				printf("0\n");
			} else {
				printf("%d ", j);
			}
		}
	}

	return 0;
}