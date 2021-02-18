/*
	A. Remove Duplicates
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[1002];

int main() {
	int n;
	scanf("%d", &n);
	int ans[n+1], num=0;
	for (int i=0; i<n; i++) {
		scanf("%d", &ans[i]);
		a[ans[i]]++;
		if (a[ans[i]]==1)
			num++;
	}
	printf("%d\n", num);
	for (int i=0; i<n; ++i) {
		if (a[ans[i]]>1)
			a[ans[i]]--;
		else printf("%d ", ans[i]);
	}

	return 0;
}