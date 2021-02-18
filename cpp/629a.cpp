/*
	A. Far Relative's Birthday Cake
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int row[101], col[101];

int main() {
	int n;
	scanf("%d", &n);
	string s[n];
	for (int i=0; i<n; ++i) {
		cin >> s[i];
		for (int j=0; j<n; ++j) {
			if (s[i][j]=='C') {
				row[i]++;
				col[j]++;
			}
		}
	}
	int ans=0;
	for (int i=0; i<n; ++i) {
		ans += ((row[i]-1)*row[i]/2 + (col[i]-1)*col[i]/2);
	}
	printf("%d\n", ans);

	return 0;
}