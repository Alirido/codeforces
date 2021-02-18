/*	
	A. Night at the Museum
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	char t = 'a';
	int rotations=0;
	for (int i=0; i<s.length(); i++) {
		rotations += (abs(s[i]-t)>13? 26-abs(s[i]-t): abs(s[i]-t));
		t = s[i];
	}
	printf("%d\n", rotations);

	return 0;
}