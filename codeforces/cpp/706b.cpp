/*	
	B. Interesting drink
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int n;
int a[100000];

/*
int bsearch(int x) {
	int ans=-1;
	int left=0, right=n-1;
	while (left<=right) {
		int mid = (left + right)/2;
		if (a[mid] == x) {
			ans = mid;
			left = mid+1;
		} else if (a[mid]>x) {
			right = mid-1;
		} else {
			left = mid+1;
		}
	}
	if (ans==-1) {
		return right;
	} else {
		return ans;
	}
}*/

int main() {
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int m;
	scanf("%d", &m);
	for (int i=0; i<m; i++) {
		int x;
		scanf("%d", &x);
		// printf("%d\n", 1+bsearch(x));
		/* ATTENTION !
		We can use upper_bound function to return to last index that X occur in array
		upper_bound(iterator first, iterator last, val)
		*/
		printf("%d\n", upper_bound(a, a+n, x)-a);

	}

	return 0;
}