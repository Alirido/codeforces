/*	
	A. Yet Another String Game
	Time limit 2 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ln = s.length();
		char ans[ln];
		for (int i=0; i<ln; i+=2) {
			if (s[i] == 'a')
				ans[i] = 'b';
			else
				ans[i] = 'a';
		}
		for (int i=1; i<ln; i+=2) {
			if (s[i] == 'z')
				ans[i] = 'y';
			else
				ans[i] = 'z';
		}
		for (int i=0; i<ln; i++)
			cout << ans[i];
		cout << endl;
	}

	return 0;
}