/*
	A. PolandBall and Hypothesis
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	bool prime=true;
	int i=2;
	while (prime && i*i<=x) {
		if (x%i==0)
			prime=false;
		++i;
	}
	return prime;
}

int main() {
	int n;
	scanf("%d", &n);
	if (n%2==1)
		putchar('3');
	else {
		int m=1;
		while (isPrime(n*m+1)) m++;
		printf("%d\n", m);
	}

	return 0;
}