/*
	A. Word Correction
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	bool destroy=false;
	for (int i=0; i<n; ++i) {
		if (!destroy) {
			if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
				destroy=true;
			putchar(s[i]);
		} else {
			if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') {
				destroy=false;
				putchar(s[i]);
			}
		}
	}

	return 0;
}