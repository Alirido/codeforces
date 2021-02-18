 /*
	A. Vanya and Table
	Time limit 2 s
	Memory limit 256Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ans=0;
	while (n--) {
		int a,b,c,d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		ans += (c-a+1)*(d-b+1);
	}
	printf("%d\n", ans);

	return 0;
}