/*	
	A. Bear and Poker
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int x;
	scanf("%d", &x);
	while (x%2==0) x /= 2;
	while (x%3==0) x /= 3;
	int core=x;
	--n;
	bool ans=true;
	while (n--) {
		scanf("%d", &x);
		if (ans) {	
			if (x%core == 0) {
				while (x%2==0) x /= 2;
				while (x%3==0) x /= 3;
				if (x!=core) ans=false;
			} else ans=false;
		}
	}
	if (ans) 
		puts("YES");
	else puts("NO");

	return 0;
}