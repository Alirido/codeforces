/*
	A. Business trip
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, i;
	int a[13];
	scanf("%d", &k);
	for (i=0; i<12; i++) {
		cin>>a[i];
	}
	sort(a, a+12, greater<int>());
	i=0;
	while (a[i]<k && i<12) {
		k -= a[i];
		i++;
	}
	if (i==12) {
		printf("-1\n");
	} else {
		if (i==0 && k==0) {
			printf("0\n");
		} else {
			printf("%d\n", i+1);
		}
	}
	return 0;
}