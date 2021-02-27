/*
	A. Infinity Gauntlet
	Time limit 1 s
	Memory limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
map<string, string> m = {{"purple", "Power"}, 
	{"green", "Time"}, 
	{"blue", "Space"}, 
	{"orange", "Soul"}, 
	{"red", "Reality"}, 
	{"yellow", "Mind"}
};


int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", 6-n);
	while(n--) {
		string s;
		cin >> s;
		m.erase(s);
	}
	auto it = m.cbegin();
	for (; it!=m.cend(); it++) {
		cout << it->second << endl;
	}

	return 0;
}