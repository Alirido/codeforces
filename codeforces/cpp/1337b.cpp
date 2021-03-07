/*	
	B. Kana and Dragon Quest game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int x, n, m;
		scanf("%d %d %d", &x, &n, &m);
		while (x > 0 && x/2 >= 10 && n > 0) {
			x = x/2 + 10;
			n--;
		}
		while (x > 0 && m-- > 0) x -= 10;

		if (x > 0)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}