/*
	A. Games
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int m[31][3];
	int n, i;
	
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> m[i][0] >> m[i][1];
	}
	int sum=0;
	for (i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (m[i][0]==m[j][1]) {
				sum++;
			}
		}
	}
	cout << sum << endl;
	
	return 0;
}	
