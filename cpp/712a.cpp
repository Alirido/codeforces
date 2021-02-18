/*	
	A. Memory and Crow
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	b[n-1]=a[n-1];
	for (int i=n-2; i>=0; --i) {
		b[i]=a[i]+a[i+1];
	}
	for (int i=0; i<n; ++i)
		printf("%d ", b[i]);

	return 0;
}