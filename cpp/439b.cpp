/*
	B. Devu, the Dumb Guy
	Time limit 1 s
	Memory limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	unsigned long long x;
	cin >> n >> x;
	unsigned long long a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	unsigned long long ans=0;
	for (int i=0; i<n; i++) {
		ans += a[i]*x;
		if (x>1)
			x--;
	}
	cout << ans;

	return 0;
}