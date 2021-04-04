/*	
	A. Strange Table
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
		ll n, m, x;
		cin >> n >> m >> x;
		ll col = (x-1)/n + 1;
		ll row = x%n;
		if (row == 0) row = n;
		cout << (row-1)*m + col << endl;
	}

	return 0;
}