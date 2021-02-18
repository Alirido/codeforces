/*
	A. Roma and Lucky Numbers
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	int ans=0;
	while (n--) {
		int lucky=0;
		int x;
		scanf("%d", &x);
		while (x!=0) {
			if (x%10==4 || x%10==7)
				lucky++;
			x /= 10;
		}
		if (lucky<=k)
			ans++;
	}
	printf("%d\n", ans);

	return 0;
}