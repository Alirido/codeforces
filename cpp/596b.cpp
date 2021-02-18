/*	
	B. Wilbur and Array
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	long long ans;
	int prev;
	scanf("%d", &prev);
	ans = (prev<0 ? -1*prev : prev);
	for (int i=1; i<n; i++) {
		int x;
		scanf("%d", &x);
		ans += abs(x-prev);
		prev = x;
	}
	cout << ans << endl;

	return 0;
}