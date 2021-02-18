/*
	A. Pupils Redistribution
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[7], b[7];

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		b[x]++;
	}
	int ans=0, suma=0, sumb=0;
	for (int i=1; i<=5; ++i) {
		// cout << a[i] << " " << b[i] << " " << abs(b[i]-a[i]) << endl;
		if ((a[i]+b[i])%2==1) {
			printf("-1\n");
			return 0;
		}
		if (a[i]>b[i])
			suma+=a[i]-b[i];
		else if (a[i]<b[i])
			sumb+=b[i]-a[i];
	}
	printf("%d\n", (suma==sumb? suma/2 : -1));

	return 0;
}