/*	
	B. Anton and Digits
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int dua, tiga, lima, enam;
	scanf("%d %d %d %d", &dua, &tiga, &lima, &enam);
	int t1 = min(dua, min(lima, enam)), t2=0;
	dua -= t1;
	if (dua>0) {
		t2 = min(dua, tiga);
	}
	printf("%d\n", t1*256 + t2*32);

	return 0;
}