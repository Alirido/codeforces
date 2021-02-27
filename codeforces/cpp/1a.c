/*
A. Theatre Square
Time limit per test: 1s
memory 256mb
*/

#include <stdio.h>

unsigned long long ceiling (unsigned long long x, unsigned long long a); 

int main()
{
	unsigned long long m,n,a;
	unsigned long long x;
	scanf("%I64d  %I64d %I64d", &m, &n, &a);
	x=(ceiling(m, a)*ceiling(n, a));
	printf("%I64d\n", x);
	return 0;
}

unsigned long long ceiling (unsigned long long x, unsigned long long a)
{
	if (x % a == 0) 
	{
		return x/a;
	}
	else {
		return (x/a + 1);
	}
}
