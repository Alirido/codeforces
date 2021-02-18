/*
	A. Devu, the Singer and Churu, the Joker
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d, i, temp=0;
	int jokes=0;
	cin >> n >> d;
	int t;
	for (i=1; i<=n; i++) {
		cin >> t;
		temp += t;
		if (temp<=d) {
			if (i==n) {
				jokes += (d-temp)/5;
			} else {
				temp += 10;
				jokes += 2;
			}
		}
	}
	if (temp>d) {
		cout << -1 << endl;
	} else {
		cout << jokes << endl;
	}

	return 0;
}