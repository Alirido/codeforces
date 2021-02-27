/*	
	B. Soldier and Badges
	Time limit 3 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[7000];

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; ++i) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	int coins=0;
	for (int i=1; i<=n; ++i) {
		while (a[i]>1) {
			int j=i+1; ++coins;
			while (a[j]>0) {
				++coins;
				++j;
			}
			a[j]++;
			--a[i];
		}
	}
	printf("%d\n", coins);

	return 0;
}