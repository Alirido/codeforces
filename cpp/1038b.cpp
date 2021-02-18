/*	
	B. Non-Coprime Partition
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n<3)
		printf("No\n");
	else {
		printf("Yes\n");
		printf("1 %d\n", (n+1)/2);
		int temp=(n+1)/2;
		printf("%d ", n-1);
		for (int i=1; i<=n; i++) {
			if (i!=temp)
				printf("%d ", i);
		}
	}

	return 0;
}