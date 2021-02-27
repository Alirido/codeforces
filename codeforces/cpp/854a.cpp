/*	
	A. Fraction
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int numerator=n/2;
	while (__gcd(numerator, n-numerator)!=1) numerator--;
	printf("%d %d\n", numerator, n-numerator);

	return 0;
}