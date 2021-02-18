/*
	A. Initial Bet
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, sum=0;
	for (int i=1; i<=5; i++) {
		scanf("%d", &x);
		sum += x;
	}
	if (sum%5==0 && sum/5!=0) {
		printf("%d\n", sum/5);
	} else {
		printf("-1\n");
	}
	return 0;
}