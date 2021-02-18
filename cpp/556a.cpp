/*
	A. Case of the Zeros and Ones
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	scanf("%d", &n);
	string s;
	int nol=0, satu=0;
	cin >> s;
	for (i=0; i<n; i++) {
		if (s[i]=='0') {
			nol++;
		} else {
			satu++;
		}
	}
	printf("%d\n", abs(nol-satu));

	return 0;
}
