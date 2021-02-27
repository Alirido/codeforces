/*	
	A. Panoramix's Prediction
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
bool isNotPrime[60];

void initialization() {
	isNotPrime[1]=true;
	for (int i=4; i<=60; i+=2)
		isNotPrime[i]=true;
	for (int i=3; i<=60; i+=2) {
		if (!isNotPrime[i]) {
			for (int j=2; j*i<=60; j++)
				isNotPrime[i*j]=true;
		}
	}
}

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	initialization();
	// Find next prime
	++n;
	while (isNotPrime[n++]) ;
	if (n-1==m)
		puts("YES");
	else puts("NO");

	return 0;
}