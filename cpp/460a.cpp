/*
	A. Vasya and Socks
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i;
	int day, rest;
	
	cin >> n >> m;
	day=n;
	while (n>=m) {
		rest=n%m;
		n = n/m;
		day=day + n;
		n= n+rest;
	}
	cout << day << endl;
	
	return 0;
}
