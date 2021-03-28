/*	
	A. Space Navigation
	Time limit 2 s
	Memory Limit 256 MB
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
		string s; cin >> s;
		int n = s.length();
		int ans = 0, i = 0;
		bool zero = true;
		while (zero && i<n) {
			if (s[i] == '0')
				i++;
			else
				zero = false;
		}
		while (i<n) {
			int between = 0;
			zero = true;
			while (zero && i<n) {
				if (s[i] == '0') {
					between++;
					i++;
				} else
					zero = false;
			}
			if (i<n) {
				ans += between;
				bool one = true;
				while (one && i<n) {
					if (s[i] == '0')
						one = false;
					else
						i++;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}