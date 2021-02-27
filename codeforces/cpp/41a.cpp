/*
	A. Translation
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

bool isReversed(string s, string t) {
	string temp=s;
	for (int i=s.length()-1; i>=0; i--) {
		temp[s.length()-i-1]=s[i];
	}
	if (t == temp) {
		return true;
	} else {
		return false;
	}
}

int main() {
	string s, t;
	
	cin >> s;
	cin >> t;
	if (isReversed(s, t)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}
