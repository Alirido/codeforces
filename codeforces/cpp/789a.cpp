/*	
	A. Anastasia and pebbles
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d", &n, &k);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int keep=0, ans=0;
	for (int i=0; i<n; i++) {
		ans += a[i]/(2*k);
		a[i]%=(2*k);
		if (a[i]>0) {
			if (a[i]<=k)
				keep++;
			else keep += 2;
		}
		if (keep>=2) {
			ans++;
			keep-=2;
		}
	}

	printf("%d\n", ans+(keep==0? 0 : 1));

	return 0;
}