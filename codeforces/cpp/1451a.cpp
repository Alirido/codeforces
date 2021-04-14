/*	
	A. Substract or Divide
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
		if (n == 1)
			cout << 0 << endl;
		else if (n == 2)
			cout << 1 << endl;
		else if (n == 3)
			cout << 2 << endl;
		else {
			if (n%2 == 0)
				cout << 2 << endl;
			else
				cout << 3 << endl;
		}
	}

	return 0;
}