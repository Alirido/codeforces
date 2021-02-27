/*
	C. Lucky Numbers
	Time limit 0.5 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	unsigned long long ans=2,temp=2;
	for (int i=2; i<=n; ++i) {
		temp *= 2;
		ans+=temp;
	}
	cout << ans << endl;

	return 0;
}