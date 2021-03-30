/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 10: Struktur Data NonLinear
	B. Hobi Batu Akik
	Time limit 1 s
	Memory limit 64 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int n;
	cin >> n;
	map<int, int> m;
	while (n--) {
		int o;
		cin >> o;
		if (o == 1) {
			int x;
			cin >> x;
			m[x]++;
		} else if (o == 2) {
			cout << (m.rbegin()->first) << endl;
		} else if (o == 3) {
			int x = m.rbegin()->first;
			if (--m[x] == 0) {
				int temp = m.erase(x);
			}
		}
	}

	return 0;
}