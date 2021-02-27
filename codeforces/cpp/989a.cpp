/*	
	A. A Blend of Springtime
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int blend=0;
	int i=1;
	cin >> s;
	int t = s.length();
	while (blend<3 && i < t-2) {
		if (s[i] == s[i-1]) {
			blend=0;
		} else if (s[i] != '.') {
			if (s[i] != s[i+1] && s[i+1] != '.') {
				blend=3;
			}
		} else {
			blend = 0;
		}
		i++;
	}
	if (blend == 3) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}