/*	
	C. K-th Not Divisible by n
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		int ans = k;
		while (k>=n) {
			int temp = k/n;
			ans += temp;
			k = k%n + temp;
		}
		printf("%d\n", ans);
	}

	return 0;
}