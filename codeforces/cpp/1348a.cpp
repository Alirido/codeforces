/*	
	A. Phoenix and Balance
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int ans = 2;
		int temp = 1;
		for (int i=1; i<n/2; i++) {
			temp *= 2;
			ans += 2*temp;
		}
		printf("%d\n", ans);
	}

	return 0;
}