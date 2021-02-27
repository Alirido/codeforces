/*
	B. Christmas Spruce
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[1001];

int main() {
	int n;
	scanf("%d", &n);
	int temp=n;
	if (n%4!=0) {
		puts("NO");
		return 0;
	} else {
		temp--;
		while (temp--) {
			int x;
			scanf("%d", &x);
			a[x]++;
		}
		int i=1, sum=0;
		while ((a[i]==0 || a[i]>=3) && i<=n)  {
			sum += a[i];
			i++;
		}
		if (i>n) {
			if (a[n]==0) {
				if (sum == 3*(n/4)+(n/4)-1)
					puts("YES");
				else puts("NO");
				return 0;
			}
			else puts("NO");
			return 0;
		} else puts("NO");
	}

	return 0;
}