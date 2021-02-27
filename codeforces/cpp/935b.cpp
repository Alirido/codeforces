/*
	B. Fafa and the Gates
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int x=0, y=0;
	int ans=0;
	bool firstkingdom;
	if (s[0]=='U') {
		y++;
		firstkingdom=false;
	} else {
		x++;
		firstkingdom=true;
	}
	for (int i=1; i<n; ++i) {
		if (s[i]=='U') {
			y++;
		} else x++;
		if (firstkingdom) {
			if (y>x) {
				ans++;
				firstkingdom=false;
			}
		} else {
			if (x>y) {
				ans++;
				firstkingdom=true;
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}