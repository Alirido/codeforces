/*
	A. Keyboard
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	char x,c;
	string s="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	cin >> x;
	while (cin>>c) {
		cout<<s[s.find(c)-(x=='R')+(x=='L')];
	}

	return 0;
}