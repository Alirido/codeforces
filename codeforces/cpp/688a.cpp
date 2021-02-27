/*	
	A. Opponents
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	scanf("%d%d\n", &n, &d);
	int cnt=0, max=0;
	char c;
	for (int i=0; i<d; ++i) {
		bool win=false;
		while ((c=getchar()) != '\n') {
			if (!win) {	
				if (c == '0') {
					win=true;		
				}
			}
		}
		if (win) {
			++cnt;
			if (cnt>max)
				max=cnt;
		} else cnt=0;
	}
	printf("%d\n", max);

	return 0;
}