/*	
	B. New Theater Square
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		string s[n];
		
		for (int i=0; i<n; i++)
			cin >> s[i];

		if (2*x <= y) {
			int ans = 0;
			for (int i=0; i<n; i++) {
				for (int j=0; j<m; j++) {
					if (s[i][j] == '.')
						ans++;
				}
			}
			cout << ans * x << endl;
		} else {
			int sumx = 0, sumy = 0;
			for (int i=0; i<n; i++) {
				bool first = true;
				if (s[i][0] == '.') {
					sumx++;
					first = false;
				}
				for (int j=1; j<m; j++) {
					if (first) {
						if (s[i][j] == '.') {
							sumx++;
							first = false;
						}
					} else {
						if (s[i][j] == '.') {
							sumy++;
							sumx--;
						} 
						first = true;
					}
				}
			}
			cout << sumx*x + sumy*y << endl;
		}
	}

	return 0;
}