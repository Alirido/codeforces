/*
	A. Magnets
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	string s,temp;
	int max;
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> s;
		if (i>1) {
			if (s!=temp) {
				max++;
			}
		} else {
			max=1;
		}
		temp=s;
	}
	cout << max << endl;
	
	return 0;
}
