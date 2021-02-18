/*
	71A
	Way too long words
	Time 2s
	Memory 256mb
*/

#include <stdio.h>

int main()
{
	char a[101][101];
	int n, i, j;
	
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%s", &a[i]);
		if (strlen(a[i])>10) {
			
