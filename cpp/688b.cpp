/*
	B. Lovely Palindromes
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s;
	for (int i=s.length()-1; i>=0; i--) {
		cout << s[i];
	}printf("\n");

	return 0;
}