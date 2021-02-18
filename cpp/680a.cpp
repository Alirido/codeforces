/*	
	A. Bear and FIve Cards
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x,sum=0;
	map<int, int> m;
	for (int i=0; i<5; ++i) {
		scanf("%d", &x);
		sum += x;
		m[x]++;
	}
	int minus=0;
	for (auto elem : m) {
		if (elem.second==2) {
			if (elem.first*elem.second>minus)
				minus = elem.first*elem.second;
		} else if (elem.second>2) {
			if (3*elem.first>minus)
				minus = 3*elem.first;
		}
	}
	printf("%d\n", sum-minus);

	return 0;
}