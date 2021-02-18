/*	
	A. Queue on Bus Stop
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n];
	for (int i=0; i<n; i++) 
		scanf("%d", &a[i]);
	int i=0, ans=0, temp=m; 
	for (int i=0; i<n; i++) {
		if (a[i]<=temp)
			temp -= a[i];
		else {
			ans++;
			temp = m-a[i];
		}
	}
	printf("%d\n", ans+1);

	return 0;
}