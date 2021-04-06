/*	
	C. Dominant Piranha
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
		int n;
		cin >> n;
		vector<int> a(n);
		int mx=0, mn=INT_MAX;
		for (int i=0; i<n; i++) {
			cin >> a[i];
			mx = max(mx, a[i]);
			mn = min(mn, a[i]);
		}
		if (mn == mx)
			cout << -1 << endl;
		else {
			bool dominant = false;
			int i=0, ans;
			while (!dominant && i<n-1) {
				if (a[i] == mx && a[i+1] < mx) {
					dominant = true;
					ans = i;
				} else if (a[i+1] == mx && a[i] < mx) {
					dominant = true;
					ans = i+1;
				} else
					i++;
			}
			if (dominant)
				cout << ans+1 << endl;
			else
				cout << -1 << endl;
		}
	}

	return 0;
}