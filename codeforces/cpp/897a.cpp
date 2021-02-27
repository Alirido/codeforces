/*
	A. Scarborough Fair
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c, s[102];

int main() {
	int n,m;
	scanf("%d%d\n", &n, &m);
	int i=1;
	while ((c=getchar()) != '\n') {
		s[i]=c;
		++i;
	}
	while (m--) {
		int l,r;
		char c1,c2;
		cin >> l >> r >> c1 >> c2;	
		for (int j=l; j<=r; ++j) {
			if (s[j]==c1)
				s[j]=c2;
		}
	}
	for (int j=1; j<i; ++j)
		printf("%c", s[j]);

	return 0;
}