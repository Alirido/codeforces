/*
	A. Vladik and Courtesy
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int n = (int) sqrt(a);
	if (n*(n+1)>b)
		puts("Valera");
	else puts("Vladik");

	return 0;
}