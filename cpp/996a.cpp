/*	
	A. Hit the Lottery
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans=0;
	while (n>0) {
		if (n>=100) {
			ans += n/100;
			n %= 100;
		} else if (n>=20) {
			ans += n/20;
			n %= 20;
		} else if (n>=10) {
			ans += n/10;
			n %= 10;
		} else if (n>=5) {
			ans += n/5;
			n %= 5;
		} else {
			ans += n;
			n=0;
		}
	}
	printf("%d\n", ans);

	return 0;
}