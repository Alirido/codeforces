/*	
	A. Magic Numbers
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char s[11], c;
int n;

int main() {
	while ((c=getchar()) != '\n') {
		s[n++] = c;
	}
	bool leadingone=false;
	int four=0;
	int i=0;
	while (four<=2 && i<n) {
		if (leadingone) {
			if (s[i]=='1') {
				i++;
				four=0;
			} else if (s[i]=='4') {
				four++;
				++i;
			} else {
				four=10;
			}
		} else {
			if (s[i]=='1') {
				leadingone=true;
				++i;
			} else four=10;
		}
	}
	if (four<=2)
		puts("YES");
	else puts("NO");

	return 0;
}