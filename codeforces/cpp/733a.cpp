/*	
	A. Grasshoppper And the String
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int max=0, t=-1;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'Y') {
			if (max<i-t) {
				max = i-t;
			}
			t = i;
		}
	}
	if (max<s.length()-t) {
		max = s.length()-t;
	}
	printf("%d\n", max);

	return 0;
}