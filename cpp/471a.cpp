/*	
	A. MUH and Sticks
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int sum[10];

int main() {
	int a[6];
	for (int i=0; i<6; ++i) {
		scanf("%d", &a[i]);
		sum[a[i]]++;
	}
	bool animal=false, bear=false, elephant=false;
	for (int i=1; i<=9; i++) {
		if (sum[i] == 6) {
			animal=true;
			elephant=true;
			break;
		} else if (sum[i]==5) {
			animal=true;
			bear=true;
			break;
		} else if (sum[i]==4) {
			animal=true;
		} else if (sum[i]==2) {
			elephant=true;
		} else if (sum[i]==1) {
			bear=true;
		}
	}
	if (animal) {
		if (bear)
			printf("Bear\n");
		else
			printf("Elephant\n");
	} else {
		printf("Alien\n");
	}

	return 0;
}