/*
	C. Vasya And The Mushrooms
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	unsigned long long a[n],b[n];
	for (int i=0; i<n; ++i)
		cin >> a[i];
	for (int i=0; i<n; ++i)
		cin >> b[i];
	unsigned long long suma=0, sumb=0, sumc=0;
	// Case A. --> Find suma
	unsigned long long temp=n;
	for (int i=1; i<n; i++)
		suma += i*a[i];
	for (int i=n-1; i>=0; --i) {
		suma += temp*b[i];
		temp++;
	}
	// Case B. --> Find sumb
	for (int i=0; i<n; ++i)
		sumb += (i+1)*b[i];
	temp=n+1;
	for (int i=n-1; i>=0; --i) {
		sumb += temp*a[i];
	}
	// Case C. --> Find sumc
	sumc = b[0];
	for (int i=1; i<n; ++i) {
		if (i%2==0) {
			sumc += (2*i)*a[i] + (2*i+1)*b[i];
		} else {
			sumc += (2*i)*b[i] + (2*i+1)*a[i];
		}
	}
	cout << max(max(suma,sumb), sumc);

	return 0;
}