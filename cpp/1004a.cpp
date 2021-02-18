/*	
	A. Sonya and Hotels
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,d;
	scanf("%d%d", &n, &d);
	int x, prev;
	scanf("%d", &prev);
	int ans = 2;
	for (int i=1; i<n; ++i) {
		scanf("%d", &x);
		if (x-prev > 2*d)
			ans +=2;
		else if (x-prev == 2*d)
			ans++;
		prev = x;
	}
	printf("%d\n", ans);

	return 0;
}