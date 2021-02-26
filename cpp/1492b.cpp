/*	
	B. Card Deck
	Time limit 1 s
	Memory Limit 512 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		int isVisisted[n+1] = { 0 };
		int x=n, i=n-1;
		stack<int> s;
		while (x>0 && i>=0) {
			while (isVisisted[x] && x>0) x--;
			while (arr[i] != x && i>0) {
				s.push(arr[i]);
				isVisisted[arr[i]] = 1;
				i--;
			}
			s.push(arr[i]);
			while (!s.empty()) {
				printf("%d ", s.top());
				s.pop();
			}
			x--;
			i--;
		}
		printf("\n");
	}

	return 0;
}