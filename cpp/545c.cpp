/*	
	C. Woodcutters
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

struct pointTree
{
	int point, h;
};

int main() {
	int n;
	scanf("%d", &n);
	pointTree a[n];
	for (int i=0; i<n; i++) 
		scanf("%d%d", &a[i].point, &a[i].h);
	int trees=1;
	for (int i=1; i<n-1; ++i) {
		if (a[i].point-a[i].h > a[i-1].point)
			trees++;
		else if (a[i].point+a[i].h < a[i+1].point) {
			trees++;
			a[i].point += a[i].h;
		}
	}
	if (n!=1) trees++;
	printf("%d\n", trees);

	return 0;
}