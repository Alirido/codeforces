/*
	B. Little Pony and Sort by Shift
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	int ans=0, first=a[0], i=1;
	int temp=first, pos=0;
	while (ans!=-1 && i<n) {
		if (pos!=0) {
			if (a[i]>first || a[i]<temp)
				ans=-1;
		} else {
			if (a[i]<temp) {
				if (a[i]>first)
					ans=-1;
				else pos=i;
			}
		}
		temp=a[i];
		++i;
	}
	printf("%d\n", (ans==-1? -1 : (n-pos)%n));

	return 0;
}