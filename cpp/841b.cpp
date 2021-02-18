/*
	B. Godsend
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	unsigned long long sum=0, odd=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x%2==1)
			odd++;
		sum += x;
	}
	if (sum%2==1)
		puts("First");
	else {
		if (odd==0)
			puts("Second");
		else puts("First");
	}

	return 0;
}