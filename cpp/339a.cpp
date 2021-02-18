/*
	A. Helpful Maths
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int i, pass;
	
	cin >> s ;
	int first = 0; pass = s.length()-2;
	while (first <= (pass-1)) {
		for (i=0; i<=pass-1; i=i+2) {
			if (s[i]>s[i+2]) {
				char t = s[i];
				s[i] = s[i+2];
				s[i+2] = t;
			}
		}
		pass = pass-2;
	}
	cout << s << endl;
	
	return 0;
}
	
