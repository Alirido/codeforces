/*	
	A. Alyona and Numbers
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
unsigned long long a[10];

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	unsigned long long sum=0;
	for (int i=1; i<=5; ++i) {
		if (i==5)
			a[i] = (m)/5;
		else 
			a[i] = (m+i)/5;
		sum +=a[i];
	}
	unsigned long long ans = (n/5)*sum;
	for (int i=1; i<=(n%5); ++i) {
		ans += a[i];
	}
	cout << ans;

	return 0;
}