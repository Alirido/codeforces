/*
	A. Vitaliy and Pie
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[27];
char c;
bool door;

int main() {
	int n;
	scanf("%d\n", &n);
	int ans=0;
	while ((c=getchar()) != '\n') {
		if (!door) {
			a[c]++;
			door = true;
		}
		else {
			if (a[c+32]==0)
				ans++;
			else a[c+32]--;
			door = false;
		}
	}
	printf("%d\n", ans);
	

	return 0;
}