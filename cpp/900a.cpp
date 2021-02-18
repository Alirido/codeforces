/*
	A. Find Extra One
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int left=0, right=0;
	while (n--) {
		int l,r;
		scanf("%d%d", &l, &r);
		if (l<0)
			left++;
		else right++;
	}
	if ((left==0 || left==1) || (right==0 || right==1))
		puts("Yes");
	else puts("No");

	return 0;
}