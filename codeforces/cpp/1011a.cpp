/*
	A. Stages
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int n,k;
	scanf("%d%d\n", &n, &k);
	int a[n], i=0;
	while ((c=getchar()) != '\n') {
		a[i] = (c-'a')+1;
		i++;
	}
	sort(a,a+n);
	int prev=a[0], ans=a[0];
	i=1; k--;
	while (n-i>=k && k>0) {
		if (a[i]-prev>1) {
			ans += a[i];
			prev = a[i];
			k--;
		}
		i++;
	}
	if (k==0)
		printf("%d\n", ans);
	else printf("-1\n");

	return 0;
}