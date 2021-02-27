/*
	A. Circle Line
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	int s,t;
	scanf("%d%d", &s, &t);
	int d1=0,d2=0;
	int temp=s-1; bool first=true;
	while (temp!=(s==1? n-1 : s-2)) {
		if (first) {
			if (temp!=t-1)
				d1+=a[temp];
			else {
				d2 += a[temp];
				first=false;
			}
		} else d2+=a[temp];
		temp = (temp+1)%n;
	}
	d2+=a[temp];
	printf("%d\n", min(d1,d2));

	return 0;
}