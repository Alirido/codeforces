/*	
	A. Amr and Music
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

struct ins {
	int day, idx;
} in[100];

int cmp(ins a, ins b) {
	if (a.day == b.day)
		return a.idx < b.idx;
	return a.day <= b.day;
}

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i=0; i<n; i++) {
		scanf("%d", &in[i].day);
		in[i].idx = i+1;
	}
	sort(in, in+n, cmp);
	int sum = in[0].day, imax=0, i=0;
	while (sum<=k && i<n) {
		++i;
		imax = i;
		if (i==n)
			break;
		sum += in[i].day;
	}
	printf("%d\n", imax);
	for (i=0; i<imax-1; ++i)
		printf("%d ", in[i].idx);
	if (imax>0)
		printf("%d\n", in[imax-1].idx);

	return 0;
}