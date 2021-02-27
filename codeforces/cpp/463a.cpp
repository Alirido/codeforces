/*
	A. Caisa and Sugar
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, s;
	scanf("%d%d", &n, &s);
	int maks=-1;
	while (n--) {
		int x,y;
		scanf("%d%d", &x, &y);
		if (x<s) {
			if (y==0) {
				if (y>maks)
					maks=y;
			} else {
				if (100-y>maks)
					maks=100-y;
			}
		} else if (x==s) {
			if (y==0) {
				if (y>maks)
					maks=0;
			}
		}
	}
	printf("%d\n", maks);

	return 0;
}