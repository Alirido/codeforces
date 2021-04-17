/*	
	A. Sequence with Digits
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
		ll a, k;
		cin >> a >> k;
		for (ll i=2; i<=k; i++) {
			string s = to_string(a);
			int mn = *min_element((s).begin(), (s).end()) - '0';
			int mx = *max_element((s).begin(), (s).end()) - '0';
			a += mn * mx;
			if (mn == 0)
				break;
		}
		cout << a << endl;
	}

	return 0;
}