/*	
	B. Inboc (100500)
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n+1];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int i=0, ans=0;
	while (a[i]==0 && i<n) i++;
	if (i==n) printf("0\n");
	else {
		ans++; i++;
		for (; i<n; i++) {
			if (a[i]==1) {
				if (a[i-1]==0)
					ans+=2;
				else ans++;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}