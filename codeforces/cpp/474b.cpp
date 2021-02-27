/*
	B. Worms
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int x, int size) {
	int left=0, right=size-1;
	int result=-1;
	while(left<=right && result==-1) {
		int mid = (left+right)/2;
		if (x == a[mid]) {
			result = mid;
		} else if (x < a[mid]) {
			right = mid-1;
		} else {
			left = mid + 1;
		}
	}
	if (result==-1) {
		return left;
	} else {
		return result;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int t=0;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		t += x;
		a[i] = t;
	}
	int m;
	scanf("%d", &m);
	for (int i=0; i<m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d\n", binarySearch(a, x, n)+1);
	}

	return 0;
}