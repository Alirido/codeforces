/*	
	A. Maximum Increase
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int x;
	scanf("%d", &x);
	int max=1, prev=x, cnt=1;
	for (int i=1; i<n; i++) {
		scanf("%d", &x);
		if (x>prev) {
			++cnt;
			if (cnt>max)
				max=cnt;
		} else {
			cnt = 1;
		}
		prev = x;
	}
	printf("%d\n", max);

	return 0;
}