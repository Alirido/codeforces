/*
	A. Choosing Teams
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n+1];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int sum=0, i=0;
	while (a[i]<=(5-k)) {
		sum++;
		i++;
	}
	printf("%d\n", sum/3);
	return 0;
}