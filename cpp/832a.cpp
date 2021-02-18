/*	
	A. Sasha and Sticks
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n,k;
	cin >> n >> k;
	if ((n/k)%2 == 1)
		puts("YES");
	else
		puts("NO");

	return 0;
}