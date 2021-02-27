/*	
	A. Find Square
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int n,m;
string s[117];

void startPoint(int *i, int *j) {
	int row=0, col;
	// bool found = true;
	for (; row<n; row++) {
		for (col = 0; col<m; col++) {
			if (s[row][col]=='B') {
				*i = row;
				*j = col;
				return;
			}
		}
	}
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i=0; i<n; i++)
		cin >> s[i];
	int i, j;
	startPoint(&i,&j);

	int k=1;
	bool stop=false;
	while (!stop && j+k<m) {
		if (s[i][j+k]=='W')
			stop=true;
		else k++;
	}

	printf("%d %d\n", i+(k/2)+1, j+(k/2)+1);

	return 0;
}