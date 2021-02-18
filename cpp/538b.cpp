/*	
	B. Quasi BInary
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	int k=0;
	while (n>0) {
		int temp=n;
		int pengali=1;
		int qb=0; //Quasi Binary
		while (temp>0) {
			if (temp%10>0)
				qb += pengali;
			temp /= 10;
			pengali *= 10;
		}
		v.push_back(qb);
		n -= qb;
		++k;
	}
	printf("%d\n", k);
	for (int i=0; i<k; ++i)
		printf("%d ", v[i]);

	return 0;
}