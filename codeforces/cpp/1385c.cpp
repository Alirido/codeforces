/*	
	C. Make It Good
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
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		if (n <= 2)
			cout << 0 << endl;
		else {
			int i = n-1;
			bool dif = false;
			while (!dif && i>0) {
				if (a[i-1] >= a[i])
					i--;
				else
					dif = true;
			}
			if (!dif)
				cout << 0 << endl;
			else {
				int ans = 0;
				while (ans == 0 && i>0) {
					if (a[i-1] <= a[i])
						i--;
					else
						ans = i;
				}
				cout << ans << endl;
			}
		}
	}

	return 0;
}