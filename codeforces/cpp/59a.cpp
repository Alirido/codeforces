/*
	A. Word
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int i, uppercase=0, lowercase=0;
	
	cin >> s;
	for (i=0; i<s.length(); i++) {
		if (s[i]>='A' && s[i]<='Z') {
			uppercase++;
		} else {
			lowercase++;
		}
	}
	if (uppercase>lowercase) {
		for (i=0; i<s.length(); i++) {
			if (s[i]>='a' && s[i]<='z') {
				s[i]=s[i]-('a'-'A');
			}
		}
	} else {
		for (i=0; i<s.length(); i++) {
			if (s[i]>='A' && s[i]<='Z') {
				s[i]=s[i]+('a'-'A');
			}
		}
	}
	cout << s << endl;
	
	return 0;
}
