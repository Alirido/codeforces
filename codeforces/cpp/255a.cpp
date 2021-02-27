/*	
	A. Greg's Workout
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int chest=0, biceps=0, back=0;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		if (i%3==1)
			chest += x;
		else if (i%3 == 2)
			biceps += x;
		else back += x;
	}
	if (chest>=biceps && chest>=back)
		puts("chest");
	else if (biceps>=chest && biceps>=back)
		puts("biceps");
	else puts("back");

	return 0;
}