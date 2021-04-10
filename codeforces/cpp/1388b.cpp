/*	
	B. Captain Flint and a Long Voyage
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
		int eight = (n-1)/4 + 1;
		for (int i=0; i < n-eight; i++)
			cout << 9;
		for (int i=0; i<eight; i++)
			cout << 8;
		cout << endl;
	}

	return 0;
}