/*
	A. New Year and Hurry
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, i;
	scanf("%d %d", &n, &k);
	int minute = 240-k;
	i=1;
	while (i<=n && minute>=0) {
		minute -= 5*i;
		i++;
	}
	if (minute<0) {
		printf("%d\n", i-2);
	} else {
		printf("%d\n", i-1);
	}
	
	return 0;
}
