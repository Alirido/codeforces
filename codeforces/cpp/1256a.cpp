/*	
	A. Payment Without Change
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
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		int i = s/n;
		while (i > a) i--;
		if ((s - i*n) <= b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}