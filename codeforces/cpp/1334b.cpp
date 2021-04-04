/*	
	B. Middle Class
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
		ll n, x;
		cin >> n >> x;
		ll arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+n, greater<ll>());
		ll ans = 0, i=0;
		ll sum = arr[i];
		if (sum >= x) {
			ans++;
			i++;
			bool yes = true;
			while (yes && i<n) {
				sum += arr[i];
				if (sum >= (i+1)*x) {
					ans++;
					i++;
				} else
					yes = false;
			}
			cout << ans << endl;
		} else {
			cout << 0 << endl;
		}
	}

	return 0;
}