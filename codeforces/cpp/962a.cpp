/*
	A. Equator
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int sum[n+1]; sum[0]=0;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		sum[i] = sum[i-1]+x;
	}
	int i=1;
	int reach = (sum[n]%2==0? sum[n] : sum[n]+1)/2;
	while (sum[i++]<reach);
	printf("%d\n", i-1);

	return 0;
}