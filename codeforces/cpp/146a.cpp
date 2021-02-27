/*
	A. Professor GukiZ's Robot
	Time limit 0.5 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int front[130], back[130];

int main() {
	int n;
	scanf("%d\n", &n);
	int i=1;
	// bool lucky = true;
	while((c=getchar()) != '\n') {
		if (i<=n/2) {
			if (c=='7' || c=='4')
				front[c]++;
			else {
				puts("NO");
				return 0;
			}
		} else {
			if (c=='7' || c=='4')
				back[c]++;
			else {
				puts("NO");
				return 0;
			}
		}
		++i;
	}
	if (front['7']==back['7'] && front['4']==back['4'])
		puts("YES");
	else puts("NO");

	return 0;
}