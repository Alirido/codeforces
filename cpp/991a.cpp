/*	
	A. If at first you don't succeed...
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,n;
	scanf("%d%d%d%d", &a, &b, &c, &n);
	if (a<c || b<c)
		printf("-1\n");
	else {
		int ans = n - (a+b-c);
		printf("%d\n", (ans>0? ans : -1));
	}

	return 0;
}