/*	
	A. Short Substrings
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		string s;
		cin >> s;
		int length = s.length();
		if (length == 2) {
			cout << s << endl;
		} else {
			for (int i=0; i<length; i+=2) {
				printf("%c", s[i]);
			}
			printf("%c\n", s[length-1]);
		}
	}

	return 0;
}