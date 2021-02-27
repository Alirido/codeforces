/*
	A. Div. 64
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i=0;
	while(s[i++]!='1' && i<s.length());
	if (s.length()-i<6)
		puts("no");
	else {
		int zero=0;
		while (zero<6 && i<s.length()) {
			if (s[i]=='0')
				zero++;
			++i;
		}
		if (zero==6)
			puts("yes");
		else puts("no");
	}

	return 0;
}