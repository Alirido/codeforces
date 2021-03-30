/*	
	A. Matrix Game
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
		ll n, m;
		cin >> n >> m;
		int row[n] = {0};
		int col[m] = {0};
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				int x;
				cin >> x;
				if (x) {
					row[i] = 1;
					col[j] = 1;
				}
			}
		}

		int filledrow = n;
		for (int i=0; i<n; i++) {
			if (row[i]) filledrow--;
		}
		int filledcol = m;
		for (int i=0; i<m; i++) {
			if (col[i]) filledcol--;
		}
		int mins = min(filledrow, filledcol);
		cout << ((mins&1) == 1 ? "Ashish" : "Vivek") << endl;
	}

	return 0;
}