/*
	A. Gravity Flip
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	int a[101];
	
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int temp;
	for (i=n-2; i>=0; i--) {
		int j=n-1;
		while (j>i) {
			if (a[i]>a[j]) {
				temp=a[i]-a[j];
				a[j]=a[j]+temp;
				a[i]=a[i]-temp;
			}
			j--;
		}
	}
	for (i=0; i<n; i++) {
		printf("%d", a[i]);
		if (i!=n-1) {
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
