/*
	A. Romaji
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
map<char, bool> m = {{'a', true}, 
					{'i', true},
					{'u', true},
					{'e', true},
					{'o', true},
					{'n', true}
				};

int main() {
	string s;
	cin >> s;
	int n = s.length()-1;
	if (!m[s[n]]) {
		puts("NO");
		return 0;
	} else {
		bool yes=true;
		while (yes && n>0) {
			if (m[s[n]]) {
				if (s[n]=='n') {
					if (!m[s[n-1]])
						yes=false;
				}
			} else {
				if (!m[s[n-1]])
					yes=false;
			}
			n--;
		}
		if (yes)
			puts("YES");
		else puts("NO");
	}

	return 0;

}