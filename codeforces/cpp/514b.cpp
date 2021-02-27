/*
	B. Han Solo and Lazer Gun
	Time limit 1 s
	Memory limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
map<double, int> m;
bool inf;

int main() {
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	while (n--) {
		int a,b;
		scanf("%d%d", &a, &b);
		a -= x; 
		b -= y; 
		// cout << a << " " << b << endl;
		if (a==0) {
			if (!inf)
				inf=true;
		} else {
			if (!m[(double)b/a])
				m[(double)b/a]++;
		}
		// printf("%.8f\n", (double)b/a);
	}
	cout << m.size()+(inf? 1 : 0) << endl;

	return 0;
}