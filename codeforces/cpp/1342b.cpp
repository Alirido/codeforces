/*	
	B. Binary Period
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

bool checkStr(string s) {
	int ln = s.length();
	int zero = 0, one = 0;
	for (int i=0; i<ln; i++) {
		if (s[i] == '0')
			zero++;
		else
			one++;
	}
	if (zero == 0 || one == 0)
		return true;
	else
		return false;
}

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ln = s.length();
		if (ln == 1)
			cout << s << endl;
		else {
			bool equal = checkStr(s);
			if (equal)
				cout << s << endl;
			else {
				cout << s[0];
				for (int i=1; i<ln; i++) {
					if (s[i] == s[i-1]) 
						cout << (s[i] == '0'? '1' : '0');
					cout << s[i];
				}
				cout << endl;
			}
		}
	}

	return 0;
}