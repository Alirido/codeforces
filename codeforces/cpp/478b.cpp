/*	
	B. Random Teams
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n, m;
	cin >> n >> m;
	cout << (m-(n%m))*((n/m)*(n/m-1)/2) + (n%m)*((n/m + 1)*(n/m)/2) << " " << ((n-m+1)*(n-m)/2) << endl;

	return 0;
}
