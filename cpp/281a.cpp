/*
	A. Word Capitalization
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	cin >> s;
	if (s[0]>='a' && s[0] <= 'z') {
		s[0] = s[0] - ('z'-'Z');
	}
	cout << s << endl;
	
	return 0;
}
