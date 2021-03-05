/*	
	B. Array with Odd Sum
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int odd = 0, x;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			if (x%2 == 1)
				odd++;
		}
		if (odd == 0)
			printf("NO\n");
		else {
			if (odd == n && n%2 == 0)
				printf("NO\n"); 
			else
				printf("YES\n");
		}

	}

	return 0;
}