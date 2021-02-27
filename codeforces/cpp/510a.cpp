/*
	A. Fox and Snake
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	int i,j;
	
	cin >> n >> m;
	for (i=1; i<=n; i++) {
		for (j=1; j<=m; j++) {
			if (i%2==1) {
				cout << '#';
			} else {
				if ((i/2)%2==1) {
					if (j==m) {
						cout << '#';
					} else {
						cout << '.';
					}
				} else {
					if (j==1) {
						cout << '#';
					} else {
						cout << '.';
					}
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}
	
