/*	
	C. Vasya and Multisets
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int a[101];

int main() {
	int n;
	scanf("%d", &n);
	int set[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &set[i]);
		a[set[i]]++;
	}
	vector<int> nice, canSplit;
	for (int i=1; i<=100; i++) {
		if (a[i]==1)
			nice.push_back(i);
		else if (a[i]>2)
			canSplit.push_back(i);
	}
	if (nice.size()%2==0) {
		for (int i=0; i<nice.size()/2; i++) {
			a[nice[i]]--;
		}
	} else {
		if (!canSplit.size()) {
			printf("NO\n");
			return 0;
		} else {
			for (int i=0; i<nice.size()/2; i++)
				a[nice[i]]--;
			a[canSplit[0]]--;
		}
	}

	printf("YES\n");
	for (int i=0; i<n; i++) {
		if (a[set[i]]>0) {
			putchar('A');
			a[set[i]]--;
		} else putchar('B');
	}

	return 0;
}