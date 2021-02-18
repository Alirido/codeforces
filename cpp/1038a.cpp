/*	
	A. Equality
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int a[130];

int main() {
	int n, k;
	scanf("%d%d\n", &n, &k);
	while ((c=getchar()) != '\n')
		a[c]++;
	int min=100001, i=0;
	while (min!=0 && i<k) {
		// cout << a['A'+i] << " ";
		if (min>a['A'+i])
			min=a['A'+i];
		i++;
	} cout << endl;
	printf("%d\n", min*k);

	return 0;
}