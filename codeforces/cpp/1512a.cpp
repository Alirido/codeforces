/*	
	A. Spy Detected!
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
		map<int, int> count, idx;
		for (int i=1; i<=n; i++) {
			int x;
			cin >> x;
			count[x]++;
			idx[x] = i;
		}
		for (auto const& it : count) {
			if (it.second == 1) {
				cout << idx[it.first] << endl;
			}
		}
	}

	return 0;
}
