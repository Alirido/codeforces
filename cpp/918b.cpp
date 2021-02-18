/*
	B. Radio Station
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	map<string, string> a;
	while (n--) {
		string name, ip;
		cin >> name >> ip;
		a[ip+";"]=name;
	}
	while (m--) {
		string cmd, ip;
		cin >> cmd >> ip;
		cout << cmd << " " << ip << " #" << a[ip] << endl;
	}

	return 0;
}