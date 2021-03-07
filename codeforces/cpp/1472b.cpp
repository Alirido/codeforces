/*	
	B. Fair Division
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
		int candies[3] = { 0 }, sum = 0;
		while (n--) {
			int x;
			scanf("%d", &x);
			candies[x]++;
			sum += x;
		}
		if (sum%2 == 0) {
			int half = sum/2;
			bool yes = true;
			while (half > 1) {
				if (candies[2] > 0) {
					half -= 2;
					candies[2]--;
				} else 
					break;
			}
			while (half > 0) {
				if (candies[1] > 0) {
					half--;
					candies[1]--;
				} else {
					yes = false;
					break;
				}
			}
			if (yes)
				printf("YES\n");
			else 
				printf("NO\n");
		} else
			printf("NO\n");
	}

	return 0;
}