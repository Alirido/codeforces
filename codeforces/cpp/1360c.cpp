/*
	C. Similar Pairs
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int arr[n];
		int even = 0;
		for (int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
			if (arr[i]%2==0)
				even++;
		}
		if (even%2 == 0)
			printf("YES\n");
		else {
			sort(arr, arr+n);
			int i=1;
			bool yes = false;
			while (!yes && i<n) {
				if (arr[i] - arr[i-1] == 1)
					yes = true;
				else
					i++;
			}
			printf("%s\n", yes? "YES" : "NO");
		}
	}

	return 0;
}