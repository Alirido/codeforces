/*	
	B. Anton and Classes
	Time limit 4 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int l,r, lmax=0, rmin=1000000001;
	// lmin=1000000001, rmax=0,
	while (n--) {
		scanf("%d%d", &l, &r);
		// if (lmin>l)
			// lmin=l;
		if (lmax<l)
			lmax=l;
		if (rmin>r)
			rmin=r;
		// if (rmax<r)
			// rmax=r;
	}
	int m;
	scanf("%d", &m);
	int lmax2=0, rmin2=1000000001;
	while (m--) {
		scanf("%d%d", &l, &r);
		if (l>lmax2)
			lmax2=l;
		if (r<rmin2)
			rmin2=r;
	}
	int ans=max(lmax2-rmin, lmax-rmin2);
	printf("%d\n", (ans<0? 0 : ans));

	return 0;
}