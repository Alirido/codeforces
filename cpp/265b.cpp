/*	
	B. Roadside Trees (Simplified Edition)
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans,prev;
	scanf("%d", &prev);
	ans = prev+1;
	for (int i=1; i<n; i++) {
		int x;
		scanf("%d", &x);
		ans += abs(x-prev) + 2;
		prev = x;
	}
	printf("%d\n", ans);

	return 0;
}