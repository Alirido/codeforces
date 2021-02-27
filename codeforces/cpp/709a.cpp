/*	
	A. Juicer
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,b,d;
	scanf("%d%d%d", &n, &b, &d);
	int size=0, ans=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x<=b) {
			size += x;
			if (size>d) {
				ans++;
				size=0;
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}