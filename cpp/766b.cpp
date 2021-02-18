/*	
	B. Mahmoud and a Triangle
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n); 
	int i=2; bool acc=false;
	while (i<n && !acc) {
		if (a[i-2]+a[i-1]>a[i])
			acc=true;
		else
			i++;
	}
	if (acc)
		puts("YES");
	else
		puts("NO");

	return 0;
}