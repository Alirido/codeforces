/*
	A. Rewards
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i;
	int a1, a2, a3;
	int b1, b2, b3;
	scanf("%d %d %d", &a1, &a2, &a3); int suma=a1+a2+a3;
	scanf("%d %d %d", &b1, &b2, &b3); int sumb=b1+b2+b3;
	scanf("%d", &n);
	int shelves = (suma+4)/5 + (sumb+9)/10;
	if (n<shelves) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}

	return 0;
}