/*	
	B. K-th Beautiful String
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
		ll n, k;
		cin >> n >> k;
		ll i = ll(floor(sqrt(2*k)));
		while (i*(i+1)/2 > k) i--;
		ll rest = k - (i*(i+1)/2);
		if (rest == 0) {
			for (ll j=0; j<n; j++) {
				if (j==n-(i+1) || j==n-i)
					cout << "b";
				else
					cout << "a";
			}
		} else {
			for (ll j=0; j<n; j++) {
				if (j==n-(i+2) || j==n-rest)
					cout << "b";
				else
					cout << "a";
			}
		}
		cout << endl;
	}

	return 0;
}