/*	
	B. OR in Matrix
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	vector<pair<int, int> > nol, one;
	int a[n][m];
	memset(a, 0, sizeof(a[0][0])*n*m);

	// Debugging
	// for (int i=0; i<n; i++) {
	// 	for (int j=0; j<m; j++)
	// 		printf("%d ", a[i][j]);
	// 	printf("\n");
	// }

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			int x;
			scanf("%d", &x);
			if (x)
				one.push_back(make_pair(i,j));
			else nol.push_back(make_pair(i,j));
		}
	}
	for (int k=0; k<nol.size(); k++) {
		int row = nol[k].first;
		int col = nol[k].second;
		// For same col
		for (int i=0; i<n; i++)
			a[i][col]=1;
		// For same row
		for (int j=0; j<m; j++)
			a[row][j]=1;
	}

	bool yes=true;
	int i=0;
	while (yes && i<one.size()) {
		bool found=false;
		int row = one[i].first;
		int col = one[i].second;
		// Searching in same col
		int j=0;
		while (!found && j<n) {
			if (!a[j][col])
				found=true;
			else j++;
		}
		if (!found) {
			j=0;
			while (!found && j<m) {
				if (!a[row][j])
					found=true;
				else j++;
			}
		}

		if (!found)
			yes=false;

		i++;
	}

	if (!yes)
		printf("NO\n");
	else {
		printf("YES\n");
		for (i=0; i<n; i++) {
			for (int j=0; j<m; j++)
				printf("%d ", (a[i][j]? 0 : 1));
			printf("\n");
		}
	}

	return 0;
}