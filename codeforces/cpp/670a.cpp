/*	
	A. Holidays
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	printf("%d %d\n", (n/7)*2 + (n%7==6? 1 : 0), (n/7)*2 + (n%7==1? 1 : 2) - (n%7==0? 2 : 0));

	return 0;
}