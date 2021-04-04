/*	
	A. Puzzle From the Future
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
		int n;
		cin >> n;
		string b;
		cin >> b;
		char prev = b[0]+1;
		cout << 1;
		int ln = b.length();
		for (int i=1; i<n; i++) {
			int add = 0;
			if (prev != b[i]+1)
				add = 1;
			cout << add;
			prev = b[i] + add;
		}
		cout << endl;
	}

	return 0;
}