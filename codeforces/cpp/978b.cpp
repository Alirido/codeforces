/*	
	B. File Name
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int n;
	scanf("%d\n", &n);
	bool x=false;
	int ans=0,temp=0;
	while ((c=getchar()) != '\n') {
		if (!x) {
			if (c=='x') {
				temp++;
				x=true;
			}
		} else {
			if (c=='x')
				temp++;
			else {
				x=false;
				temp=0;
			}
		}
		if (temp>2) ans++;
	}
	printf("%d\n", ans);

	return 0;
}