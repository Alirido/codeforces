/*	
	A. Donut Shops
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
		ll a, b, c;
		cin >> a >> b >> c;
		if (a >= c) {
			cout << -1 << " " << b << endl;
		} else {
			cout << 1 << " " << (a*b <= c ? -1 : b) << endl;
		}
	}

	return 0;
}