/*	
	A. DYZ Loves Chessboard
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c, a[100][100];
bool black=false;
int n,m;

void floodFill(int i, int j, bool color) {
	if (i==-1 || j==-1 || i==n || j==m)
		return;
	else {
		if (a[i][j]=='.') {
			if (color) {
				a[i][j]='B';
				color=false;
			} else {
				a[i][j]='W';
				color=true;;
			}
			floodFill(i-1, j, color);
			floodFill(i+1, j, color);
			floodFill(i, j-1, color);
			floodFill(i, j+1, color);
		}
	}
}

int main() {
	scanf("%d%d\n", &n, &m);
	for (int i=0; i<n; i++) {
		int j=0;
		while ((c=getchar()) != '\n') {
			a[i][j]=c;
			++j;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (a[i][j]=='.')
				floodFill(i,j,black);
		}
	}
	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; j++)
			putchar(a[i][j]);
		printf("\n");
	}

	return 0;
}