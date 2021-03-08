/*	
	B. New Year's Number
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
		printf("%s\n", (n%2020<=n/2020) ? "YES" : "NO");
	}

	return 0;
}


/*int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (n%2020 == 0 || n%2021 == 0)
			printf("YES\n");
		else {
			bool yes = false;
			int a=2020, b;
			while (!yes && a<=n) {
				if ((n-a)%2021 == 0)
					yes = true;
				else
					a+=2020;
			}

			if (yes)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}*/