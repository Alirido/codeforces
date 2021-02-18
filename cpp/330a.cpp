/*	
	A. Cakeminator
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool row[10], col[10];
char k;

int main() {
	int r,c;
	scanf("%d%d\n", &r,&c);
	char a[r][c];
	for (int i=0; i<r; ++i) {
		int j=0;
		while ((k=getchar()) != '\n') {
			a[i][j++] = k;
			if (k == 'S') {
				row[i]=true;
				col[j-1]=true;
			}
		}
	}
	int cakes = 0;
	for (int i=0; i<r; ++i) {
		if (!row[i]) {
			for (int j=0; j<c; ++j) {
				if (a[i][j] == '.') {
					cakes++;
					a[i][j] = '#';
				}
			}
		}
	}
	for (int j=0; j<c; ++j) {
		if (!col[j]) {
			for (int i=0; i<r; ++i) {
				if (a[i][j] == '.') {
					cakes++;
					a[i][j] = '#';
				}
			}
		}
	}
	printf("%d\n", cakes);

	return 0;
}