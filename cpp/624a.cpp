/*	
	A. Save Luke
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int d,l,v1,v2;
	scanf("%d%d%d%d", &d, &l, &v1, &v2);
	printf("%.7f\n", (l-d)/(float)(v1+v2));

	return 0;
}