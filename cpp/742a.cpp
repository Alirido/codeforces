/*	
	A. Arpa's hard exam and Mehrdad's naive cheat
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n==0) {
		printf("%d\n", 1);
	} else {
		int t = n%4;
		if (t==1) {
			printf("%d\n", 8);
		} else if (t==2) {
			printf("%d\n", 4);
		} else if (t==3) {
			printf("%d\n", 2);
		} else if (t==0) {
			printf("%d\n", 6);
		}
	}

	return 0;
}