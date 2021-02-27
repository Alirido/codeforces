/*	
	A. Ballons
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	if (n<2)
		puts("-1");
	else if (n==2) {
		if (a[0]==a[1])
			puts("-1");
		else {
			printf("1\n1");
		}
	} else {
		int min=2000, ans;
		for (int i=0; i<n; i++) {
			if (a[i]<min) {
				min=a[i];
				ans=i+1;
			}
		}
		printf("1\n%d", ans);
	}

	return 0;
}