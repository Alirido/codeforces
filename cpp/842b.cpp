/*	
	B. Gleb And Pizza
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int r,d;
	scanf("%d%d", &r, &d);
	int n;
	scanf("%d", &n);
	int ans=0;
	while (n--) {
		int x,y, p;
		scanf("%d%d%d", &x, &y, &p);
		float jarak = sqrt(x*x+y*y);
		if (jarak-p>=r-d && jarak+p<=r)
			ans++;
	}
	printf("%d\n", ans);

	return 0;
}