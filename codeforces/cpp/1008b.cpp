/*	
	B. Turn the Rectangles
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int w,h, temp=1e9+1;
	bool yes=true;
	while (n--) {
		scanf("%d%d", &w, &h);
		if (yes) {	
			if (w<h) {
				if (h<=temp)
					temp = h;
				else {
					if (w<=temp)
						temp = w;
					else
						yes=false;
				}
			} else {
				if (w<=temp)
					temp = w;
				else {
					if (h<=temp)
						temp = h;
					else yes = false;
				}
			}
		}
	}
	if (yes)
		printf("YES\n");
	else printf("NO\n");

	return 0;
}