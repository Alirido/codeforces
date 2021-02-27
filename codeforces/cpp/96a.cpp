/*
	A. Football
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int i=0, zero, one;
	string s;
	bool danger =false;
	
	cin >> s; zero = 0; one = 0;
	while (i<=s.length()-1 && !danger) {
		if (s[i] == '0') {
			zero++;
			one = 0;
		} else {
			one++;
			zero = 0;
		}
		if (zero >= 7 || one >= 7) {
			danger = true;
		}
		i++;
	}
	if (danger) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}
