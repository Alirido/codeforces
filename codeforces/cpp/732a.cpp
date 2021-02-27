/*
	A. Buy a Shovel
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r;
	scanf("%d %d", &k, &r);
	int n=1, temp=k;
	while (temp%10 != 0 && temp%10 != r) {
		n++;
		temp += k;
	}
	printf("%d\n", n);
	return 0;
}
