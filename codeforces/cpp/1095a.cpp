/*	
	A. Repeating Cipher
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int n;
	cin >> n;
	string t;
	cin >> t;
	int i=1, idx=0;
	while (idx<n) {
		cout << t[idx];
		idx += i++;
	}
	cout << endl;

	return 0;
}