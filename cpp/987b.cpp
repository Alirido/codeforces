/*
	B. High School: Become Human
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x,y;
	scanf("%d%d", &x, &y);
	if (x==y)
		printf("=\n");
	else if (x==1)
		printf("<\n");
	else if (y==1)
		printf(">\n");
	else if (x==2) {
		if (y==3)
			printf("<\n");
		else if (y==4)
			printf("=\n");
		else printf(">\n");
	} else if (y==2) {
		if (x==3)
			printf(">\n");
		else if (x==4)
			printf("=\n");
		else printf("<\n");
	} else if (x>y)
		printf("<\n");
	else printf(">\n");

	return 0;
}