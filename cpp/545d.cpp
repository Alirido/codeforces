/*	
	D. Queue
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	unsigned long long timewaiting=0;
	int ans=0;
	for (int i=0; i<n; i++) {
		if (a[i]>=timewaiting) {
			ans++;
			timewaiting += a[i];
		}
	}
	printf("%d\n", ans);

	return 0;
}