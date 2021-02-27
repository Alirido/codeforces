/*
	A. Maximum in Table
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	int m[n+1][n+1];
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (i==0 || j==0) {
				m[i][j]=1;
			} else {
				m[i][j]=m[i-1][j]+m[i][j-1];
			}
		}
	}
	printf("%d\n", m[n-1][n-1]);
	return 0;
}