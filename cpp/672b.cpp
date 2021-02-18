/*	
	B. Different is Good
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int a[140];
int main() {
	int n;
	scanf("%d\n", &n);
	int changes=0;
	while ((c=getchar()) != '\n') {
		a[c]++;
		if (a[c]>1)
			changes++;
	}
	if (n<=26)
		printf("%d\n", changes);
	else puts("-1");

	return 0;
}