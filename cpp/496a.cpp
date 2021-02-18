/*	
	A. Minimum Difficulty
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], mx=0; 
	scanf("%d", &a[0]);
	for (int i=1; i<n; ++i) {
		scanf("%d", &a[i]);
		if (a[i]-a[i-1]>mx)
			mx = a[i]-a[i-1];
	}
	int mn=10000;
	for (int i=2; i<n; ++i) {
		if (a[i]-a[i-2]<mn)
			mn = a[i]-a[i-2];
	}
	printf("%d\n", max(mx, mn));

	return 0;
}