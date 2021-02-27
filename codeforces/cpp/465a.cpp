/*
	A. inc ARG
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c, s[101];
int main() {
	int n;
	scanf("%d\n", &n);
	int i=0;
	while ((c=getchar()) != '\n') {
		s[i]=c;
		++i;
	}
	i=0;
	while (s[i]=='1' && i<n) {
		s[i]='0';
		++i;
	}
	// for (int i=0; i<n; ++i) putchar(s[i]);
	printf("%d\n", (i==n? n : i+1));

	return 0;
}