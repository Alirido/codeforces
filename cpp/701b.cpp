/*
	B. Cells Not Under Attack
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
bool x[100001];
bool y[100001];

int main() {
	int m;
	unsigned long long n;
	// scanf("%d%d", &n, &m);
	cin >> n >> m;
	int nx=n, ny=n;
	unsigned long long ans=0;
	while (m--) {
		int a,b;
		scanf("%d%d", &a, &b);
		if (x[a]) {
			if (!y[b]) {
				ans+=nx;
				ny--;
				y[b]=true;
			}
		} else {
			if (y[b]) {
				ans+=ny;
				nx--;
				x[a]=true;
			}
			else {
				ans+=(nx+ny-1);
				nx--;
				ny--;
				x[a]=true;
				y[b]=true;
			}
		}
		// printf("%d ", n*n-ans);
		cout << n*n - ans << " ";
	}

	return 0;
}