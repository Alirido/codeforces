/*	
	A. Yet Another Tetris Porgram
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
		int arr[n];
		for (int i=0; i<n; i++)
			scanf("%d", &arr[i]);
		int i=1;
		bool yes = true;
		while (yes && i<n) {
			if ((arr[i]&1) == (arr[i-1]&1))
				i++;
			else
				yes = false;
		}
		printf("%s\n", yes ? "YES" : "NO");
	}
	return 0;
}