/*	
	A. Generous Kefa
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int a[140];

int main() {
	int n, k;
	scanf("%d%d\n", &n, &k);
	bool stop=false;
	while ((c=getchar()) != '\n') {
		a[c]++;
		if (!stop) {	
			if (a[c]>k) {
				puts("NO");
				stop=true;
			}
		}
	}
	if (!stop) puts("YES");

	return 0;
}