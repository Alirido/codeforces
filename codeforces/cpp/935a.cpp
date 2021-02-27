/*	
	A. Fafa and his Company
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans=1, i=1;
	for (int i=2; i*i<=n; ++i) {
		if (n%i==0) {
			if (i*i==n) ans++;
			else ans += 2;
		}
	}
	printf("%d\n", ans);

	return 0;
}