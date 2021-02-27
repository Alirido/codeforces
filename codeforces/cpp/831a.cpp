/*	
	A. Unimodal Array
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int condition=1, prev = 0;
	while (n-- && condition!=0) {
		int x;
		scanf("%d", &x);
		if (condition == 1) {
			if (x==prev)
				condition=2;
			else if (x<prev)
				condition=3;
		} else if (condition == 2) {
			if (x>prev)
				condition = 0;
			else if (x<prev)
				condition = 3;
		} else {
			if (x>=prev)
				condition = 0;
		}
		prev = x;
	}
	if (!condition)
		printf("NO\n");
	else printf("YES\n");

	return 0;
}