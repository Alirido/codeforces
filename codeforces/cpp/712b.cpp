/*	
	A. Memory and Trident
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int a[135];

int main() {
	char c;
	while ((c=getchar()) != '\n') {
		a[c]++;
	}	
	int sum = abs(a['L']-a['R']) + abs(a['U']-a['D']);

	printf("%d\n", (sum%2==1? -1 : sum/2));

	return 0;

}