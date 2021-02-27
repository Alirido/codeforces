/*	
	A. Pineapple Incident
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t,s,x;
	scanf("%d%d%d", &t, &s, &x);
	if (x<t)
		puts("NO");
	else {	
		if ((x-t)%s == 0 || (x-t)%s==1) {
			if (x-t == 1)
				puts("NO");
			else puts("YES");
		} else puts("NO");
	}

	return 0;
}