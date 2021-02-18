/*
	B. Chloe and the sequence
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

// Using bitmask
int main() {
	unsigned long long n;
	cin >> n >> n;
	int ans=0;
	while (((n>>ans++) & 1) == 0);
	printf("%d\n", ans);

	return 0;
}

// Using constructive algorithm
/*
unsigned long long p(int n) {
	unsigned long long result=2;
	for (int i=2; i<=n; i++)
		result *= 2;
	return result;
}

int main() {
	int n;
	unsigned long long k;
	// scanf("%d%d", &n, &k);
	cin >> n >> k;
	int ans=-1, i=1;
	while (ans==-1 && i<=n) {
		unsigned long long temp = p(i);
		if (k%temp == temp/2) 
			ans = i;
		else i++;
	}
	printf("%d\n", ans);

	return 0;
}
*/
