/*	
	A. Alarm Clock
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
		ll a, b, c, d;
		cin >> a >> b >> c >>d;
		if (a <= b)
			cout << b << endl;
		else if (c <= d)
			cout << -1 << endl;
		else {
			ll sleep_needed = a-b;
			ll sleep = c-d;
			ll time = b;
			if (sleep_needed%sleep == 0) {
				time += (sleep_needed/sleep)*c;
			} else {
				time += (sleep_needed/sleep + 1)*c;
			}
			cout << time << endl;
		}
	}

	return 0;
}