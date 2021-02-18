/*	
	A. Vacations
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int dp[4];

int main() {
	int n;
	scanf("%d", &n);
	int rest=0, a[n];
	for (int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
		if (a[i]==0) ++rest;
	}
	for (int i=1; i<n; ++i) {
		if (a[i]==1 || a[i]==2) {
			if (a[i]==a[i-1]) {
				++rest;
				a[i]=0;
			}
		} else if (a[i]==3) {
			if (a[i-1]==1) a[i]=2;
			else if (a[i-1]==2) a[i]=1;
		}
	}
	printf("%d\n", rest);

	return 0;
}