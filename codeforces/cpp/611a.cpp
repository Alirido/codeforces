/*	
	A. New Year and Days
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int x;
	scanf("%d ", &x);
	bool isWeek;
	while ((c=getchar()) != '\n') {
		if (c=='w') 
			isWeek=true;
		else if (c=='m')
			isWeek=false;
	}
	if (isWeek)
		printf("%d\n", (x==5 || x==6? 53 : 52));
	else {
		if (x==31) printf("7\n");
		else if (x==30) printf("11\n");
		else printf("12\n");
	}

	return 0;
}