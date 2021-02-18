/*
	A. Arrival of the General
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, max, nmax, nmin, min;
	int x;
	
	cin >> n; 
	max=-1; min=101;
	for (i=1; i<=n; i++) {
		cin >> x;
		if (x>max) {
			max=x;
			nmax=i;
		}
		if (x<=min) {
			min=x;
			nmin=i;
		}
	}
	if (nmin<nmax) {
		cout << nmax-1 + n-nmin-1 << endl;
	} else {
		cout << nmax-1 + n-nmin << endl;
	}
	
	return 0;
}
		
