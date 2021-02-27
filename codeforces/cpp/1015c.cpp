/*	
	C. Songs Compression
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	long long sum=0;
	int a[n];
	for (int i=0; i<n; i++) {
		int x,y;
		scanf("%d%d", &x, &y);
		sum += x;
		a[i] = x-y;
	}
	sort(a, a+n, greater<int>());
	int i=0;
	while (sum>m && i<n) {
		sum -= a[i];
		i++;
	}
	printf("%d\n", (sum>m? -1 : i));

	return 0;
}