/*
	A. Giga Tower
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std; 

int main() {
	int n;
	scanf("%d", &n);
	bool any8=false;
	int temp = n%10;
	// printf("%d %d\n", temp, n/10);
	if (n>=0) {	
			int add=1;
			temp = (n+add)/10;
			while (!any8 && temp!=0) {
				if (temp%10==8)
					any8=true;
				else temp/=10;
			}
			if (any8)
				printf("%d\n", add);
			else {
				temp = n%10;
				if (temp<8)
					printf("%d\n", 8-temp);
				else {
					add++;
					temp = (n+add)/10;
					while (!any8 && temp!=0) {
						if (temp%10==8)
							any8=true;
						else temp/=10;
					}
					if (any8)
						printf("%d\n", add);
					else printf("%d\n", add+(n%10==8?8:7));
				}
			}
	} else {
		n++;
		temp = n;
		while (!any8 && temp!=0) {
			if (temp%10==-8)
				any8=true;
			else temp/=10;
		}
		if (any8)
			putchar('1');
		else {
			int add=abs(n%10);
			if (add==9)
				putchar('2');
			else {
				add++;
				temp = (n+add)/10;
				while (!any8 && temp!=0) {
					if (temp%10==-8)
						any8=true;
					else temp/=10;
				}
				if (any8)
					printf("%d\n", add+1);
				else {
					add ++;
					if (n+add == 2)
						add+=6;
					printf("%d\n", add+1);
				}
			}
		}
	}

	return 0;
}