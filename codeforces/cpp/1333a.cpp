/*	
	A. Little Artem
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
		int n, m;
		cin >> n >> m;
		if (((n*m)&1) == 1) {
			for (int i=0; i<n; i++)  {
				for (int j=0; j<m; j++) {
					cout << (((i+j)&1) == 1 ? "W" : "B"); 
				}
				cout << endl;
			}
		} else {
			for (int j=0; j<m; j++) {
				if (j==0 || ((j&1) == 1))
					cout << "B";
				else
					cout << "W";
			}
			cout << endl;
			for (int i=1; i<n; i++)  {
				for (int j=0; j<m; j++) {
					cout << (((i+j)&1) == 1 ? "B" : "W"); 
				}
				cout << endl;
			}
		}
	}

	return 0;
}