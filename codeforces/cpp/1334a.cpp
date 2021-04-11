/*	
	A. Level Statistics
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
		int p[n], c[n];
		for (int i=0; i<n; i++)
			cin >> p[i] >> c[i];
		bool yes = true;
		if (p[0] < c[0])
			yes = false;
		int i=1;
		while (yes && i<n) {
			if (p[i] < c[i] || p[i] < p[i-1] || c[i] < c[i-1])
				yes = false;
			else if (p[i] - p[i-1] < c[i]-c[i-1])
				yes = false;
			else
				i++;
		}
		cout << (yes ? "YES" : "NO") << endl;
	}

	return 0;
}