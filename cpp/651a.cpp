/*	
	A. Joysticks
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int minutes=0;
	while (a > 0 && b > 0) {
		if (a != 1 || b != 1) {
			if (a>b) {
				b++;
				a -=2;
			} else {
				a++;
				b -= 2;
			}
			minutes++;
		} else {
			a = 0; b = 0;
		}
	}
	printf("%d\n", minutes);

	return 0;
}