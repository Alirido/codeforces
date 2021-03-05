/*	
	A. Cards for Friends
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int w, h, n;
		scanf("%d %d %d", &w, &h, &n);
		int pieces=1;
		while (w%2==0) {
			w /= 2;
			pieces *= 2;
		}
		while (h%2==0) {
			h /= 2;
			pieces *= 2;
		}
		printf("%s\n", pieces >= n ? "YES" : "NO");
	}

	return 0;
}