/*	
	A. Tavas and Nafas
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n/10 == 1) {
		if (n==10)
			puts("ten");
		else if (n==11)
			puts("eleven");
		else if (n==12)
			puts("twelve");
		else if (n==13)
			puts("thirteen");
		else if (n==14)
			puts("fourteen");
		else if (n==15)
			puts("fifteen");
		else if (n==16)
			puts("sixteen");
		else if (n==17)
			puts("seventeen");
		else if (n==18)
			puts("eighteen");
		else
			puts("nineteen");
	} else if (n/10==0) {
		if (n==1)
			puts("one");
		else if (n==2)
			puts("two");
		else if (n==3)
			puts("three");
		else if (n==4)
			puts("four");
		else if (n==5)
			puts("five");
		else if (n==6)
			puts("six");
		else if (n==7)
			puts("seven");
		else if (n==8)
			puts("eight");
		else if (n==9)
			puts("nine");
		else
			puts("zero");
	} else {
		if (n/10 == 2)
			printf("twenty");
		else if (n/10 == 3)
			printf("thirty");
		else if (n/10 == 4)
			printf("forty");
		else if (n/10 == 5)
			printf("fifty");
		else if (n/10 == 6)
			printf("sixty");
		else if (n/10 == 7)
			printf("seventy");
		else if (n/10 == 8)
			printf("eighty");
		else
			printf("ninety");

		if (n%10 != 0)
			putchar('-');
		if (n%10==1)
			puts("one");
		else if (n%10==2)
			puts("two");
		else if (n%10==3)
			puts("three");
		else if (n%10==4)
			puts("four");
		else if (n%10==5)
			puts("five");
		else if (n%10==6)
			puts("six");
		else if (n%10==7)
			puts("seven");
		else if (n%10==8)
			puts("eight");
		else if (n%10==9)
			puts("nine");
	}
}