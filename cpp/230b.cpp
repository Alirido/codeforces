/*
	B. T-primes
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(unsigned long long n) {
	bool prime=true;
	if ((n>2 && n%2==0) || n==1) {
		prime = false;
	} else {
		int i=3;
		while (prime && i*i<=n) {
			if (n%i == 0) {
				prime = false;
			} else {
				i +=2;
			}
		}
	}
	return prime;
}

int main() {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		unsigned long long x;
		cin >> x;
		unsigned long long t = (unsigned long long) sqrt(x);
		if (t*t == x) {
			if (isPrime(t)) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			cout<< "NO" << endl;
		}
	}

	return 0;
}