/*
	A. Even Odds
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k;
	
	cin >> n >> k;
	if (k<=ceil(n/2.0)) {
		cout << 1+(2*(k-1)) << endl;
	} else {
		k=k- (long long int) ceil(n/2.0);
		cout << 2*k << endl;
	}
	
	return 0;
}
