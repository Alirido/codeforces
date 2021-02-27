/*
	A. Holiday Of Equality
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, maks;
	int a[101];
	int i;

	cin >> n;
	maks=-1;
	for (i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]>maks) {
			maks = a[i];
		}
	}
	int ans=0;
	for (i=0; i<n; i++) {
		ans += maks-a[i];
	}
	cout << ans << endl;

	return 0;

}