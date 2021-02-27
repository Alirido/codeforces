/*	
	A. Playing with Dice
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int first=0, draw=0, second=0;
	for (int i=1; i<=6; ++i) {
		if (abs(i-a)<abs(i-b))
			first++;
		else if (abs(i-a)>abs(i-b))
			second++;
		else
			draw++;
	}
	printf("%d %d %d\n", first, draw, second);

	return 0;
}