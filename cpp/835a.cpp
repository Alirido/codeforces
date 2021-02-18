/*	
	A. Key races
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int s, v1,t1,v2,t2;
	scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);
	if ((s*v1 + 2*t1) < (s*v2 + 2*t2))
		puts("First");
	else if ((s*v1 + 2*t1) > (s*v2 + 2*t2))
		puts("Second");
	else puts("Friendship");

	return 0;
}