/*	
	B. Parade
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n+1], mxl=0, mxr=0, il=0, ir=0, sumr=0, suml=0;
	for (int i=1; i<=n; ++i) {
		int l, r;
		scanf("%d%d", &l, &r);
		a[i]=l-r;
		if (a[i]<0) {	
			sumr += a[i];
			if (a[i]<mxr) {
				mxr=a[i];
				ir=i;
			}
		} else {
			suml += a[i];
			if (a[i]>mxl) {
				mxl=a[i];
				il=i;
			}
		}
	}
	if (sumr==0 || suml == 0)
		putchar('0');
	else {
		if (abs(sumr-a[il]+(suml-a[il])) > abs(suml-a[ir] + (sumr-a[ir])))
			printf("%d\n", il);
		else printf("%d\n", ir); 
	}

	return 0;
}