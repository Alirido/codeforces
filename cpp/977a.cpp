/*	
	A. Wrong Subtraction
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	while (k>0) {
		int t = n%10;
		if (t == 0) {
			k--;
			n /= 10;
		} else {
			if (k>=t) {
				k -= t;
				n -= t;
			} else {
				n -= k;
				k -= k;
			}
		}
	}
	printf("%d\n", n);

	return 0;
}