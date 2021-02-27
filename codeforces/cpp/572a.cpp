/*	
	A. Arrays
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int na, nb;
	scanf("%d%d", &na, &nb);
	int k,m;
	scanf("%d%d", &k, &m);
	int a[na+1], b[nb+1];
	for (int i=1; i<=na; ++i)
		scanf("%d", &a[i]);
	for (int i=1; i<=nb; ++i) 
		scanf("%d", &b[i]);
	if (a[k]<b[nb-m+1])
		puts("YES");
	else puts("NO");

	return 0;
}