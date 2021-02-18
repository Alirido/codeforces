/*
	A. Greed
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;

int main() {
	long long n, a, b;
	long long sum=0, capacity=0, max;
	cin >> n;
	for (long long i=1; i<=n; i++) {
		cin >> a;
		sum += a;
	}
	for (long long j=1; j<=n; j++) {
		cin >> b;
		if (j==1) {
			max = b;
		} else {
			if (b>max) {
				capacity = max;
				max = b;
			} else {
				if (b>capacity) {
					capacity = b;
				}
			}
		}
	}
	// cout << sum << endl;
	// cout << capacity << endl;
	// cout << max << endl;
	if (sum>(capacity+max)) {
		printf("NO\n");
	} else {
		printf("YES\n");
	}
	return 0;
}