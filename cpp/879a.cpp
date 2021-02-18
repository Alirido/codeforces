/*
	A. Borya's Diagnosis
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int day=0;
	while(n--) {
		int a,b;
		scanf("%d%d", &a,&b);
		if (a>day)
			day=a;
		else {
			a+=b;
			while(a<=day) a+=b;
			day = a;
		}
	}
	printf("%d\n", day);

	return 0;
}