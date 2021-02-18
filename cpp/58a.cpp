/*
	A. Chat Room
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	bool yes=false;
	
	cin >> s;
	int i = 0, t = 0;
	while (!yes && i<=s.length()-1) {
		if (t==0 && s[i]=='h') {
			t++;
		} else if (t==1 && s[i]=='e') {
			t++;
		} else if (t==2 && s[i]=='l') {
			t++;
		} else if (t==3 && s[i]=='l') {
			t++;
		} else if (t==4 && s[i]=='o') {
			yes = true;
		}
		i++;
	}
	if (yes) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}
	
