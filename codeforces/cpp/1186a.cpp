/*	
	A. Vus the Cossack and a Contest
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	if (m >= n && k >= n)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}