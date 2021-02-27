/*
	B. New Year and North Pole
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int north=0;
	bool yes=true;
	while (n--) {
		int x;
		string s;
		cin >> x >> s;
		if (yes) {
			if (north==0) {
				if (s[0]=='S') {

					north += x;
					if (north>20000) {
						puts("NO");
						return 0;
					}
				} else yes=false;
			} else if (north==20000) {
				if (s[0]=='N') {
					north -= x;
					if (north<0) {
						puts("NO");
						return 0;
					}
				} else yes=false;
			} else {
				if (s[0]=='S') {
					north += x;
					if (north>20000) {
						puts("NO");
						return 0;
					}
				} else if (s[0]=='N') {
					north -= x;
					if (north<0) {
						puts("NO");
						return 0;
					}
				}
			}
		}
	}
	if (yes && north==0)
		puts("YES");
	else puts("NO");

	return 0;
}