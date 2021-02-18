/*	
	A. Lights Out
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[3][3];

void toggling(int i, int j) {
	a[i][j]=(a[i][j]+1)%2;
	if (i-1>=0)
		a[i-1][j]=(a[i-1][j]+1)%2;
	if (i+1<3)
		a[i+1][j]=(a[i+1][j]+1)%2;
	if (j-1>=0)
		a[i][j-1]=(a[i][j-1]+1)%2;
	if (j+1<3)
		a[i][j+1]=(a[i][j+1]+1)%2;
}

int main() {
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			int x;
			scanf("%d", &x);
			if (x%2==1)
				toggling(i,j);
		}
	}
	for (int i=0; i<3; ++i) {
		for (int j=0; j<3; j++) {
			printf("%d", (a[i][j]+1)%2);
		}
		printf("\n");
	}

	return 0;
}