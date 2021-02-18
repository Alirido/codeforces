/*
	B. The Eternal Immortality
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long a, b;
	// scanf("%d%d", &a, &b);
	cin >> a >> b;
	unsigned long long ans=1;
	while (a++<b && ans!=0) {
		ans = (ans*a)%10;
	}
	// printf("%d\n", ans);
	cout << ans;

	return 0;
}