/*
	A. Triangle
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if ((a+b>c && a+c>b && b+c>a) || 
		(a+b>d && a+d>b && b+d>a) ||
		(d+b>c && d+c>b && b+c>d) ||
		(d+a>c && d+c>a && a+c>d))
		puts("TRIANGLE");
	else if ((a+b==c || a+c==b || b+c==a) ||
			(a+b==d || a+d==b || b+d==a) ||
			(a+d==c || a+c==d || d+c==a) ||
			(d+b==c || d+c==b || b+c==d) )
		puts("SEGMENT");
	else puts("IMPOSSIBLE");

	return 0;
}