/*	
	C. Exams
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

struct day {
	int a,b;
};

int cmp(day one, day two) {
	if (one.a==two.a)
		return one.b<two.b;
	return one.a<two.a;
}

int main() {
	int n;
	scanf("%d", &n);
	day d[n];
	for (int i=0; i<n; i++) {
		scanf("%d%d", &d[i].a, &d[i].b);
	}
	sort(d, d+n, cmp);
	int minday = d[0].b;
	for (int i=1; i<n; i++) {
		if (d[i].b<minday)
			minday = d[i].a;
		else
			minday = d[i].b;
	}
	printf("%d\n", minday);

	return 0;
}