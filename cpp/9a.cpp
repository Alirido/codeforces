/*	
	A. Die Roll
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int y, w;
	scanf("%d%d", &y, &w);
	int numerator = 6-max(y, w)+1;
	if (numerator%6==0)
		printf("1/1\n");
	else if (numerator%3==0)
		printf("1/2\n");
	else if (numerator%2==0)
		printf("%d/3\n", numerator/2);
	else
		printf("%d/6\n", numerator);

	return 0;
}