/*	
	A. Petr and Book
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[8];

int main() {
	int n,sum=0, i=1;
	scanf("%d", &n);
	for (; i<=7; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	sum = n%sum;
	if (sum==0) {
		i = 7;
		while (a[i--]==0);
		printf("%d\n", i+1);
	} else {
		i = 1;
		while (sum>0) {
			sum -= a[i];
			++i;
		}
		printf("%d\n", i-1);
	}

	return 0;
}