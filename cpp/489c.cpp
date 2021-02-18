/*
	C. Given length and Sum of Digits...
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int m, s;
int a[101];

int main() {
	cin >> m >> s;
	if (s==0) {
		if (m==1) {
			cout << 0 << " " << 0 << endl;
		} else {
			cout << -1 << " " << -1 << endl;
		}
	} else {
		//Minimum possible
		a[1]=1;
		int t=s-1;
		int i=m;
		while (t>0 && i>1) {
			if (t>9) {
				a[i]=9;
				t -= 9;
			} else {
				a[i]=t;
				t = 0;
			}
			i--;
		}
		if (t>8) {
			cout << -1 << " ";	
		} else {
			a[1] += t;
			for (int j=1; j<=m; j++) {
				cout << a[j];
			} printf(" ");
		}

		//Maximum possible
		fill(a+1, a+m+1, 0);
		i=1; t=s;
		while (t>0 && i<=m) {
			if (t>9) {
				a[i]=9;
				t -= 9;
			} else {
				a[i]=t;
				t = 0;
			}
			i++;
		}
		if (t>0) {
			cout << -1 << endl;	
		} else {
			for (int j=1; j<=m; j++) {
				cout << a[j];
			} printf("\n");
		}
	}

	return 0;
}