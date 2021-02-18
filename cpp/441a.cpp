/*	
	A. Valera and Antique Items
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int seller[51];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int cnt=0;
	for (int i=1; i<=n; ++i) {
		int k;
		scanf("%d", &k);
		for (int j=0; j<k; ++j) {
			int x;
			scanf("%d", &x);
			if (!seller[i]) {	
				if (x<m) {
					++cnt;
					seller[i]++;
				}
			}
		}
	}
	printf("%d\n", cnt);
	for (int i=1; i<=50; ++i) {
		if (seller[i])
			printf("%d ", i);
	} 
	if (cnt>0)
		printf("\n");

	return 0;
}