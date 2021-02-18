/*	
	B. Forgery
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

char s[1001][1001];
int a[1001][1001];

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; i++)
		scanf("%s", s[i]);
	for (int i=0; i<n-2; i++) {
		for (int j=0; j<m-2; j++) {
			if (s[i][j]=='#' && s[i][j+1]=='#' && 
				s[i][j+2] == '#' && s[i+1][j]=='#' &&
				s[i+1][j+2] == '#' && s[i+2][j]=='#' &&
				s[i+2][j+1] == '#' && s[i+2][j+2]=='#') {
				a[i][j] = a[i][j+1] = a[i][j+2] = 
				a[i+1][j] = a[i+1][j+2] = a[i+2][j] =
				a[i+2][j+1] = a[i+2][j+2] = 1;
			}
		}
	}
	bool yes = true;
	int i=0;
	while (yes && i<n) {
		int j=0;
		while (yes && j<m) {
			if (s[i][j]=='#' && !a[i][j])
				yes = false;
			++j;
		}
		++i;
	}
	if (yes)
		printf("YES\n");
	else printf("NO\n");
}