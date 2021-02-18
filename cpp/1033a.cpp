/*	
	A. King Escape
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int ax,ay;
	scanf("%d%d", &ax, &ay);
	int bx,by;
	scanf("%d%d", &bx, &by);
	int cx,cy;
	scanf("%d%d", &cx, &cy);

	if (((bx<ax && cx<ax) || (bx>ax && cx>ax)) && ((by<ay && cy<ay) || (by>ay && cy>ay)))
		printf("YES\n");
	else printf("NO\n");

	return 0;
}