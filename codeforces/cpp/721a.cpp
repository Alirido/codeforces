/*	
	A. One-dimensional Japanese Crossword
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

void countBlack(string s) {
	int i=0, sum=0;
	int tsum=0;
	int a[101];
	while (i<s.length()) {
		if (s[i] ==	'B') {
			sum++;
			while (s[i]=='B' && i<s.length()) {
				tsum++;
				i++;
			}
			a[sum] = tsum;
			tsum=0;
		} else {
			i++;
		}
	}
	printf("%d\n", sum);
	for (int i=1; i<sum; i++) {
		printf("%d ", a[i]);
	} 
	if (sum != 0) {
		printf("%d\n", a[sum]);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int sum=0;
	countBlack(s); // pass by reference (?)

	return 0;
}