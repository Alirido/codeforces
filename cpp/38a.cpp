/*	
	A. Army
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int d[n];
	for (int i=1; i<n; ++i) 
		scanf("%d", &d[i]);
	int a,b;
	scanf("%d%d", &a, &b);
	int years=0;
	for (int i=a; i<b; ++i)
		years += d[i];
	printf("%d\n", years);

	return 0;
}		