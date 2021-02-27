/*
	A. An abandoned sentiment from past
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	if (k>1) {
		puts("Yes");
		return 0;
	} else {
		int a[n],temp,pos0=-1;
		bool sorted=true;
		scanf("%d", &a[0]);
		if (a[0]==0) pos0=0;
		for (int i=1; i<n; ++i) {
			scanf("%d", &a[i]);
			if (sorted) {
				if (a[i]<a[i-1]) {
					if (a[i]==0)
						pos0=i;
					else sorted=false;
				}
			}
		}
		if (!sorted) {
			puts("Yes");
			return 0;
		} else {
			int x;
			scanf("%d", &x);
			if (pos0==0) {
				if (x>a[1])
					puts("Yes");
				else puts("No");
			} else if (pos0==n-1) {
				if (x<a[n-2])
					puts("Yes");
				else puts("No");
			}else {
				if (x>=a[pos0-1] && x<=a[pos0+1])
					puts("No");
				else puts("Yes");
			}
		}
	}

	return 0;
}

