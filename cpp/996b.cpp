/*	
	B. World Cup
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n], entered=0;
	bool enter=false;;
	for (int i=0; i<n;i ++) {
		scanf("%d", &a[i]);
	}
	int i=0;
	while (!enter) {
		if (entered>=a[i%n]) {
			printf("%d\n", i%n+1);
			enter=true;
		} else {
			entered++;
			i++;
		}
	}

	return 0;
}