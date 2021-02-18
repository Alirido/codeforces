/*	
	A. Shortest path of the king
	Time limit 1 s
	Memory Limit 64 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string a,b;
	cin >> a;
	cin >> b;
	int horizontal=b[0]-a[0];
	int vertical=b[1]-a[1];
	printf("%d\n", (int) max(abs(horizontal), abs(vertical)));
	while (horizontal!=0 || vertical!=0) {
		if (horizontal<0) {
			putchar('L');
			++horizontal;
		} else if (horizontal>0) {
			putchar('R');
			--horizontal;
		}
		if (vertical>0){
			putchar('U');
			--vertical;
		} else if (vertical<0) {
			putchar('D');
			++vertical;
		}
		printf("\n");
	}

	return 0;
}