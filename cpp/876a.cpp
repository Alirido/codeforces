/*	
	A. Trip For Meal
	Time limit 1 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a,b,c;
	scanf("%d%d%d%d", &n, &a, &b, &c);
	int ans=0;
	n--;
	if (n>0) {
		if (a<b) {
			ans += a;
			n--;
			if (c<a) {
				while (n--) {
					ans += c;
				}
			} else {
				while (n--) ans += a;
			}
		} else {
			ans += b;
			n--;
			if (c<b) {
				while (n--) ans += c;
			} else while (n--) ans +=b;
		}
	}
	printf("%d\n", ans);

	return 0;
}