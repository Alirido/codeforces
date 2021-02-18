/*	
	A. Wet Shark and Odd and Even
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int min=1000000009;
	unsigned long long sum=0;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		if (x<min && x%2 == 1) {
			min = x;
		}
		sum += x;
	}
	if (sum%2 == 0) {
		cout << sum << endl;
	} else {
		cout << sum-min << endl;
	}

	return 0;
}