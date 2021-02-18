/*
	A. Boy or Girl
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int a[151];
	for (char j='a'; j<='z'; j++) {
		a[j] = 0;
	}
	cin >> s;
	for (int i=0; i<=s.length()-1; i++) {
		if (a[s[i]] == 0) {
			a[s[i]]++;
		}
	}
	int nChar= 0; // Number of distinct characters
	for (char j='a'; j<='z'; j++) {
		nChar = nChar + a[j];
	}
	if (nChar % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	
	return 0;
}
