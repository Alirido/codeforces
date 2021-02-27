/*	
	A. Little Elephant and BIts
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	string s;
	cin >> s;
	int i=0, n = s.length();
	bool deleted=false;
	while (i<n-1) {
		if (!deleted) {
			if (s[i]=='0')
				deleted=true;
			else putchar(s[i]);
		} else putchar(s[i]);
		++i;
	}
	if (deleted)
		putchar(s[n-1]);

	return 0;
}