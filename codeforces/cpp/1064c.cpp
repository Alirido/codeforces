/*	
	C. Oh Those Palindromes
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

char c;

int main() {
	int n;
	scanf("%d\n", &n);
	char s[n];
	int i=0;
	while ((c=getchar()) != '\n') {
		s[i]=c;
		i++;
	}
	sort(s, s+n);
	for (int i=0; i<n; i++)
		putchar(s[i]);

	return 0;
}