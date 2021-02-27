/*
	A. Pizza, Pizza, Pizaa!!!
	Time limit 1 s
	Memory limit 128 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n;
	cin >> n;

	cout << (n==0 ? 0 : ((n+1)%2==0 ? (n+1)/2 : (n+1))) << endl;

	return 0;
}