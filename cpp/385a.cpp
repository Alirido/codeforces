/*	
	A. Bear and Raspberry
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,c;
	scanf("%d%d", &n, &c);
	int mx=-1, prev;
	scanf("%d", &prev);
	for (int i=1; i<n; ++i) {
		int x;
		scanf("%d", &x);
		if (prev-x>mx)
			mx = prev-x;
		prev = x;
	}
	if (mx-c<=0)
		putchar('0');
	else printf("%d\n", mx-c);

	return 0;
}