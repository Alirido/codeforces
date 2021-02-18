/*	
	A. Amr and Pins
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long r, x, y, x1, y1;
	scanf("%I64d%I64d%I64d%I64d%I64d", &r, &x, &y, &x1, &y1);
	double distance = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
	int ans = (int)ceil(distance/(r*2));
	printf("%d\n", ans);

	return 0;
}