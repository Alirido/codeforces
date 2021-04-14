/*	
	B. String LCM
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	fast_io;
	int q;
	cin >> q;
	while (q--) {
		string s, t;
		cin >> s;
		cin >> t;
		int ns = s.length(), nt = t.length();
		int n = lcm(ns, nt), i = 0;
		bool flag = true;
		while (flag && i<n) {
			if (s[i%ns] != t[i%nt])
				flag = false;
			else
				i++;
		}
		if (flag) {
			int ans = n/ns;
			for (i = 0; i<ans; i++)
				cout << s;
			cout << endl;
		} else
			cout << -1 << endl;
	}

	return 0;
}