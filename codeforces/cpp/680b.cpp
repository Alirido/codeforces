/*	
	B. Bear and FInding Criminals
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[102];

int main() {
	int n,x;
	scanf("%d%d", &n, &x);
	for (int i=1; i<=n; ++i)
		scanf("%d", &a[i]);
	int criminals=0;
	if (a[x]==1)
		++criminals;
	int left=x-1, right=x+1;
	while (left>0 || right<=n) {
		if (left<=0) {
			if (a[right] == 1)
				++criminals;
		} else {
			if (right>n) {
				if (a[left]==1)
					++criminals;
			} else {
				if (a[left]==1 && a[right]==1)
					criminals += 2;
			}
		}
		left--;
		right++;
	}
	printf("%d\n", criminals);

	return 0;
}