/*
	A. Alena's Schedule
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d" , &n);
	int breaks=0,ans=0;
	int a[n];
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	int i=0;
	while (a[i++]!=1 && i<n);
	if (i==n) {
		if (a[i-1]==1) 
			putchar('1');
		else putchar('0');
		return 0;
	} else {
		ans++;
		while (i<n) {
			if (a[i]==0) {
				breaks++;
			} else {
				if (breaks<=1) {
					ans += breaks+1;
				} else ans++;
				breaks=0;
			}
			++i;
		}
		printf("%d\n", ans);
		return 0;
	}

	return 0;
}