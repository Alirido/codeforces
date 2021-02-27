/*
	705A
	Hulk
	Time 1s
	Memory 256mb
*/

#include <stdio.h>

int main()
{
	int n, i;
	char hate[10]="I hate it";
	char love[10]="I love it";
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		if (i % 2 == 1) {
			if (i==n) {
				printf("%s\n", hate);
			} else {
				printf("I hate that ");
			}
		} else {
			if (i==n) {
				printf("%s\n", love);
			} else {
				printf("I love that ");
			}
		}
	}
	return 0;
}
