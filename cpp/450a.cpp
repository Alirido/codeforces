/*	
	A. Jzzhu and Children
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int max=-1, lastchild;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		int temp = ceil(x/(float)m);
		if (temp>=max) {
			max=temp;
			lastchild = i;
		}
	}
	printf("%d\n", lastchild);

	return 0;
}