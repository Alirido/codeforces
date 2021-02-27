/*
	A. Flipping Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int maxDP(int a[], int size) {
	int t[size+1];
	t[0]=0;
	int solution;
	for (int i=1; i<=size; i++) {
		t[i] = max(t[i-1]+a[i-1],a[i-1]);
		if (i==1) {
			solution = t[i];
		} else {
			if (solution<t[i]) {
				solution = t[i];
			}
		}
	}

	return solution;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n+1], sum=0;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		sum += x;
		if (x==1) {
			a[i]=-1;
		} else {
			a[i]=1;
		}
	}
	printf("%d\n", maxDP(a, n)+sum);

	return 0;
}