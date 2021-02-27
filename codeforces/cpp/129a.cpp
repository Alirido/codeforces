/*
	A. Cookies
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int sum, even, odd;

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		sum += x;
		if (x%2==0)
			even++;
		else odd++;
	}
	if (sum%2==0)
		printf("%d\n", even);
	else printf("%d\n", odd);

	return 0;
}