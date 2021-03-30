/*	
	D. Anti-Sudoku
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
	string s[9];
	while (t--) {
		for (int i=0; i<9; i++) {
			cin >> s[i];
		}
		for (int i=0; i<9; i++) {
			for (int j=0; j<9; j++) {
				if ((i==0 && j==0) || (i==1 && j==3) || (i==2 && j==6) ||
					(i==3 && j==1) || (i==4 && j==4) || (i==5 && j==7) ||
					(i==6 && j==2) || (i==7 && j==5))
					cout << s[i][j+1];
				else if (i==8 && j==8)
					cout << s[i][j-1];
				else
					cout << s[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}