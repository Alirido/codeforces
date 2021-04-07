/*	
	C. Unique Number
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x > 45)
			cout << -1 << endl;
		else {
			stack<int> s;
			int i = 9;
			while (x > 0 && i > 0) {
				if (i <= x) {
					s.push(i);
					x -= i;
				}
				i--;
			}
			if (x == 0) {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << endl;
			} else
				cout << -1 << endl;
		}
	}

	return 0;
}