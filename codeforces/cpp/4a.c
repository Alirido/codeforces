/*
	Problem 4A
	A. Watermelon
	time per limit 1s
	memory limit 64 mb
*/

#include <stdio.h>

int main()
{
	int w;
	scanf("%d", &w);
	if (w % 2 ==0) 
	{
		if (w==2)
		{
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	else {
		printf("NO\n");
	}
	return 0;
}
