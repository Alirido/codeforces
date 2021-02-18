/*	
	B. Buying a TV Set
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a,b,x,y;
	cin >> a >> b >> x >> y;
	long long fpb = __gcd(x,y);
	cout << min(a/(x/fpb), b/(y/fpb));

	return 0;
}