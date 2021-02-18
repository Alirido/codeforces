/*	
	A. Two Substrings
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
string s;

bool found(string x, string y) {
	int a = s.find(x);
	if (a == string::npos) {
		return false;
	}
	int b = s.find(y, a+2);
	return b != string::npos;
}

int main() {
	cin >> s;
	if (found("AB", "BA") || found("BA", "AB")) {
		puts("YES");
	} else {
		puts("NO");
	}

	return 0;
}