/*
	A. Mafia
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	long long sum=0, mx=0;
	for (int i=0; i<n; ++i) {
		long long x;
		scanf("%lld", &x);
		sum += x;
		mx = max(x,mx);
	}
	cout << max((sum + n - 2)/(n-1), mx);

	return 0;
}