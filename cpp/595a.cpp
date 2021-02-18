/*	
	A. Vitaly and Night
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	int ans=0;
	while(n--) {
		bool on;
		for (int i=1; i<=2*m; ++i) {
			if (i%2==1) on=false;
			int x;
			scanf("%d", &x);
			if (x==1) on=true;
			if (i%2==0) {
				if (on) ans++;
			}
		}
	}
	printf("%d\n", ans);

	return 0;
}