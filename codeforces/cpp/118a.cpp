/*
	A. String Task
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int i;
	string s;
	
	cin >> s;
	for (i=0; i<=s.length()-1; i++) {
		if (s[i]!='a' && s[i] !='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' &&
		s[i] !='i' && s[i]!='A' && s[i]!='O' && s[i]!='Y' && s[i]!='E' && s[i]!='U' && s[i]!='I') {
			cout << ".";
			if (s[i]>='A' && s[i]<='Z') {
				s[i] = s[i] - ('Z' - 'z');
			}
			cout << s[i];
		}
	}
	cout << endl;
	
	return 0;
}
