/*	
	A. Wizard's Duel
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int l, p, q;
	scanf("%d%d%d", &l, &p, &q);
	printf("%.6f\n", (float)p*l/(p+q));

	return 0;
}