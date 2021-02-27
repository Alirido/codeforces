/*	
	B. Duff in Love
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n,ans;
	cin >> n;
	if (n%2==0)
		ans = 2;
	else ans = 1;
	while (n%2==0) n/=2;
	unsigned long long i=3;
	while (i*i<=n) {
		if (n%i==0)
			ans *= i;
		while (n%i==0) n/=i;
		i += 2;
	}
	cout << ans*n << endl;

	return 0;
}