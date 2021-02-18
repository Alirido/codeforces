/*	
	A. Doggo Recoloring
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int a[130];

int main() {
	int n;
	scanf("%d\n", &n);
	bool yes=false;
	while ((c=getchar()) != '\n') {
		if (!yes) {
			a[c]++;
			if (a[c]>1) yes=true;
		}
	}
	if (yes)
		printf("Yes\n");
	else {
		if (n==1) 
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}