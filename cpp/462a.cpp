/*	
	A. Appleman and Easy Task
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int n;
char s[100][100], c;

int count(int a, int b) {
	int result=0;
	if (a==0) {
		if (b==0) {
			if (s[a+1][b]=='o')
				result++;
			if (s[a][b+1]=='o')
				++result;
		} else if (b==n-1) {
			if (s[a+1][b]=='o')
				result++;
			if (s[a][b-1]=='o')
				++result;
		} else {
			if (s[a+1][b]=='o')
				result++;
			if (s[a][b+1]=='o')
				++result;
			if (s[a][b-1]=='o')
				++result;
		}
	} else if (a==n-1) {
		if (b==0) {
			if (s[a-1][b]=='o')
				result++;
			if (s[a][b+1]=='o')
				++result;
		} else if (b==n-1) {
			if (s[a-1][b]=='o')
				result++;
			if (s[a][b-1]=='o')
				++result;
		} else {
			if (s[a-1][b]=='o')
				result++;
			if (s[a][b+1]=='o')
				++result;
			if (s[a][b-1]=='o')
				++result;
		}
	} else {
		if (b==0) {
			if (s[a+1][b]=='o')
				result++;
			if (s[a-1][b]=='o')
				++result;
			if (s[a][b+1]=='o')
				++result;
		} else if (b==n-1) {
			if (s[a+1][b]=='o')
				result++;
			if (s[a-1][b]=='o')
				++result;
			if (s[a][b-1]=='o')
				++result;
		} else {
			if (s[a+1][b]=='o')
				result++;
			if (s[a-1][b]=='o')
				++result;
			if (s[a][b+1]=='o')
				++result;
			if (s[a][b-1]=='o')
				++result;
		}
	}
	return result;
}

int main() {
	scanf("%d\n", &n);
	for (int i=0; i<n; ++i) {
		int j=0;
		while ((c=getchar()) != '\n') {
			s[i][j++] = c;
		}
	}
	bool ans = true;
	int i=0;
	while (ans && i<n) {
		int j=0;
		while (ans && j<n) {
			int adj = count(i, j);
			if (adj%2!=0) 
				ans = false;
			++j;
		}
		++i;
	}
	if (ans) 
		puts("YES");
	else puts("NO");

	return 0;
}