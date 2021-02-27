/*
	A. Is your horseshoe on the other hoof?
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c ,d;
	int buy=0;
	
	cin >> a >> b >> c >> d;
	if (a==b) {
		buy++;
		if (a==c) {
			buy++;
			if (a==d) {
				buy++;
			}
		} else {
			if (a==d) {
				buy++;
			} else {
				if (c==d) {
					buy++;
				}
			}
		}
	} else if (a==c) {
		buy++;
		if (a==d) {
			buy++;
		} else {
			if (b==d) {
				buy++;
			}
		}
	} else if (a==d) {
		buy++;
		if (b==c) {
			buy++;
		}
	} else {
		if (b==c) {
			buy++;
			if (b==d) {
				buy++;
			}
		} else if (b==d) {
			buy++;
		} else {
			if (c==d) {
				buy++;
			}
		}
	}
	printf("%d\n", buy);
	
	return 0;
}
			
