/*	
	A. Chewbacca and Number
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++) {
		if (s[i] >= '5') {
			if (i == 0) {
				if (s[i] != '9') {
					s[i] = '9' - (s[i] - '0');
				}
			} else {
				s[i] = '9' - (s[i] - '0');
			} 
		}
	}
	cout << s << endl;
	
	return 0;
}