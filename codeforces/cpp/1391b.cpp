/*	
	B. Fix You
	Time limit 1 s
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
		int n, m;
		cin >> n >> m;
		string s;
		int ans = 0;
		for (int i=0; i<n-1; i++) {
			cin >> s;
			if (s[m-1] == 'R') ans++;
		}
		cin >> s;
		for (int i=0; i<m; i++) {
			if (s[i] == 'D') ans++;
		}
		cout << ans << endl;
	}

	return 0;
}