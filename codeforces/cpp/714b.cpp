/*	
	B. Filya and Homework
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	map<int, bool> m;
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		if (!m[x])
			m[x]=true;
	}
	if (m.size()<=2)
		printf("YES\n");
	else if (m.size()==3) {
		map<int, bool>::iterator it = m.begin();
		int a = it->first; it++;
		int b = it->first; it++;
		int c = it->first;
		if (2*b == a+c)
			printf("YES\n");
		else printf("NO\n");
	} else printf("NO\n");

	return 0;
}