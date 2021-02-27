/*	
	B. Passwords
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[105];

int main() {
	int n,k;
	scanf("%d%d\n", &n, &k);
	string s;
	while (n--) {
		cin >> s;
		a[s.length()]++;
	}
	cin >> s;
	int best=0, worst=0, l=s.length();
	for (int i=1; i<l; ++i) {
		best+=a[i];
	}
	worst=best+a[l];best++;
	printf("%d %d\n", ((best-1)/k)*5 + best, ((worst-1)/k)*5 + worst);

	return 0;
}