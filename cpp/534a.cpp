/*	
	A. Exam
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n<3)
		printf("1\n1");
	else if (n==3)
		printf("2\n1 3");
	else {
		printf("%d\n", n);
		int i;
		if (n%2==0) {
			i = n/2;
			while (i>0) 
				printf("%d %d ", i--, n--);
		} else {
			i = n/2+1;
			while (i>0) {
				if (i==1) {
					putchar('1');
					--i;
				}
				else
					printf("%d %d ", i--, n--);
			}
		}
	}

	return 0;
}