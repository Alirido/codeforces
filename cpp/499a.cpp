/*
	A. Watching a movie
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,x;
	scanf("%d%d", &n,&x);
	int ans=0, current_minute=1;
	while (n--) {
		int l,r;
		scanf("%d%d", &l, &r);
		int temp = (l-current_minute)/x;
		current_minute += temp*x;
		ans += r-current_minute+1;
		current_minute = r+1;
	}
	printf("%d\n", ans);

	return 0;
}