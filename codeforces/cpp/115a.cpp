/*	
	A. Party
	Time limit 3 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n+1], deep=0;
	for (int i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i=1; i<=n; i++) {
		int cnt=1, move=a[i];
		while (move>0) {
			cnt++;
			move = a[move];
		}
		deep = max(deep, cnt);
	}
	printf("%d\n", deep);

	return 0;
}