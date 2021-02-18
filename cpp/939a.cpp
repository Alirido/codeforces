/*
	A. Love Triangle
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[n+1];
	for (int i=1; i<=n; ++i) {
		scanf("%d", &a[i]);
	}
	bool yes=false;
	int i=1;
	while (!yes && i<=n) {
		if (a[a[a[i]]]==i)
			yes=true;
		else ++i;
	}
	if (yes)
		puts("YES");
	else puts("NO");

	return 0;
}