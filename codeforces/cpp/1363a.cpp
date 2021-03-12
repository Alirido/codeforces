/*
	A. Odd Selection
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, x;
		scanf("%d %d", &n, &x);
		int even=0, odd=0, tmp;
		for (int i=0; i<n; i++) {
			scanf("%d", &tmp);
			if (tmp%2==0)
				even++;
			else
				odd++;
		}
		if (odd == 0)
			printf("No\n");
		else {
			if (odd%2==0)
				odd--;

			if (odd >= x) {
				if (x%2==1)
					printf("YES\n");
				else {
					odd = x-1;
					if (even >= x-odd)
						printf("Yes\n");
					else
						printf("No\n");
				}
			} else {
				if (even >= x-odd)
					printf("Yes\n");
				else
					printf("No\n");
			}
		}
	}

	return 0;
}