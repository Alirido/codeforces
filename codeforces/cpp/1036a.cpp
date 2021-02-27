/*	
	A. Function Height
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n, k;
	cin >> n >> k;
	if (k%n==0)
		cout << k/n << endl;
	else 
		cout << k/n + 1 << endl;

	return 0;
}