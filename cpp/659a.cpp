/*	
	A. Round House
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	printf("%d\n", ((a+b)%n == 0 ? n : ((a+b)%n < 0? n+(a+b)%n : (a+b)%n)));

	return 0;
}