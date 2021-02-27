/*	
	A. Beru-taxi
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int n;
	scanf("%d", &n);
	float min=1000.0;
	for (int i=0; i<n; i++) {
		int x, y, v;
		scanf("%d%d%d", &x, &y, &v);
		float temp = sqrt((x-a)*(x-a) + (y-b)*(y-b)) / (float) v;
		if (temp<min)
			min = temp;
	}
	printf("%.7f\n", min);

	return 0;
}