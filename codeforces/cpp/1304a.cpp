/*	
	A. Two Rabbits
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
		int x, y, a ,b;
		cin >> x >> y >> a >> b;
		cout << ((y-x)%(a+b) == 0? (y-x)/(a+b) : -1) << endl;
	}

	return 0;
}