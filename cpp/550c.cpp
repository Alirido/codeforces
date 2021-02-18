/*	
	C. Divisibility by Eight
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c, a[105];

int main() {
	int n=0;
	bool isNol=false, isEight=false;
	while ((c=getchar()) != '\n') {
		a[n++]=c;
		if (!isNol && !isEight) {	
			if (c=='0')
				isNol=true;
			else if (c=='8')
				isEight=true;
		}
	} 
	if (isNol)
		printf("YES\n0");
	else if (isEight)
		printf("Yes\n8");
	else{
		int i=n-1,temp;
		bool yes=false;
		while (!yes && i>=0) {
			if ((a[i]-'0')%2==0) {
				int j = i-1;
				while (!yes && j>=0) {
					temp = (a[j]-'0')*10 + (a[i]-'0');
					if (temp%8==0) {
						yes=true;
						printf("YES\n%c%c\n", a[j], a[i]);
					} else {
						int k=j-1;
						while (!yes && k>=0) {
							temp = (a[k]-'0')*100 + (a[j]-'0')*10 + (a[i]-'0');
							if (temp%8==0) {
								yes = true;
								printf("YES\n%c%c%c\n", a[k], a[j], a[i]);
							} else {
								--k;
							}
						}
						--j;
					}
				}
			}
			--i;
		}
		if (!yes)
			puts("NO");
	}

	return 0;
}