/*	
	B. Sequential Nim
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
		bool first_turn = true;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int i=0;
		bool notOne = false;
		while (!notOne && i<n) {
			if (a[i] == 1) {
				i++;
				first_turn = !first_turn;
			} else
				notOne = true;
		}
		if (!notOne) first_turn = !first_turn;
		cout << (first_turn ? "First" : "Second") << endl;
	}

	return 0;
}