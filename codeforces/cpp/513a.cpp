/*	
	A. Game
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n1, n2, k1, k2;
	// bool isFirstWin = false;
	scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
	if (n1<n2) {
		printf("Second\n");
	} else if (n1>n2) {
		printf("First\n");
	} else {
		printf("Second\n");
	}
}