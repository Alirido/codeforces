/*
	A. Parallelpiped
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long a,b,c, n;
	cin >> a >> b >> c;
	n = (int)sqrt(a*b*c);
	a = n/a;
	b = n/b;
	c = n/c;
	cout << 4*(a+b+c);

	return 0;
}