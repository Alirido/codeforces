/*	
	B. Even Array
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int arr[n], x;
		int swapodd = 0;
		int swapeven = 0;
		bool isEven = true;
		for (int i=0; i<n; i++) {
			scanf("%d", &x);
			if (isEven && x%2 != 0) 
				swapeven++;
			else if (!isEven && x%2 == 0)
				swapodd++;
			isEven = !isEven;
		}
		if (swapodd == swapeven)
			printf("%d\n", swapodd);
		else
			printf("-1\n");
	}

	return 0;
}