/*	
	A. Shovels and Swords
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
		int a, b;
		cin >> a >> b;
		if (a >= b) {
			int dif = a-b;
			if (b > dif) {
				if ((b-dif)%3 == 2) {
					cout << dif + (2*((b-dif)/3)) + 1 << endl;	
				} else
					cout << dif + (2*((b-dif)/3)) << endl;
			} else {
				cout << b << endl;
			}
		} else {
			int dif = b-a;
			if (a > dif) {
				if ((a-dif)%3 == 2) {
					cout << dif + (2*((a-dif)/3)) + 1 << endl;
				} else
					cout << dif + (2*((a-dif)/3)) << endl;
			} else {
				cout << a << endl;
			}
		}
	}

	return 0;
}

/*
int main() {
	fast_io;
	int t; cin >> t;
	while(t--) {
		int a, b; cin >> a >> b;
		if(a > b) swap(a, b);
		int ans = min(a, b-a);
		a -= ans;
		ans += 2 * (a/3); a %= 3;
		ans += (a > 1);
		cout << ans << '\n';
	}
	return 0;
}
*/