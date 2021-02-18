/*	
	A. Contest
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (max(3*a/10, a-(a/250*c)) > max(3*b/10, b-(b/250*d)))
		puts("Misha");
	else if (max(3*a/10, a-(a/250*c)) < max(3*b/10, b-(b/250*d)))
		puts("Vasya");
	else puts("Tie");

	return 0;
}