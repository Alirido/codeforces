/*
	A. Petya and Strings
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	int i;
	
	cin >> s1;
	for (i=0; i<=s1.length()-1; i++) {
		if (s1[i]>='A' && s1[i]<='Z') {
			s1[i] = s1[i]-('Z'-'z');
		}
	}
	cin >> s2;
	for (i=0; i<=s2.length()-1; i++) {
		if (s2[i]>='A' && s2[i]<='Z') {
			s2[i] = s2[i]-('Z'-'z');
		}
	}
	
	if (s1<s2) {
		cout << -1 << endl;
	} else if (s1>s2) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
	return 0;
}
