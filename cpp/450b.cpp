/*
	B. Jzzhu and Seuances
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std; 

int main() {
	int a[6];
	scanf("%d%d", &a[1],&a[2]);
	a[0]=a[1]-a[2];
	for (int i=3; i<6; i++)
		a[i]=a[i-1]-a[i-2];
	int n;
	scanf("%d", &n);
	printf("%d\n", (a[n%6]%1000000007 < 0? a[n%6]%1000000007 + 1000000007 : a[n%6]%1000000007));

	return 0;
}