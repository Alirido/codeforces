/*	
	A. Cashier
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, a;
	scanf("%d%d%d", &n, &l, &a);
	int ans=0, prevt = 0;
	while (n--) {
		int t,d;
		scanf("%d%d", &t, &d);
		ans += (t-prevt)/a;
		prevt = t+d;
	}
	printf("%d\n", ans + (l-prevt)/a);

	return 0;
}