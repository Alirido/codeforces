/*	
	A. C+=
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, n;
		scanf("%d %d %d", &a, &b, &n);
		bool turnA;
		if (a > b)
			turnA = false;
		else turnA = true;
		int ans = 0;
		while (a <= n && b <= n) {
			if (turnA) {
				a += b;
				turnA = false;
			} else {
				b += a;
				turnA = true;
			}
			ans++;
		}
		printf("%d\n", ans);
	}

	return 0;
}