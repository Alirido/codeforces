/*
	C. Registration system
	Time limit 5 s
	Memory Limit 64 MB
*/

#include <bits/stdc++.h>

using namespace std;

struct appear {
	string s;
	int n;
} s[100001];

int main() {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		string x;
		cin >> x;
		bool makenew=true;
		int j=0, idx;
		while (s[j].n!=0 && makenew) {
			if (x == s[j].s) {
				makenew=false;
				idx = j;
			} else {
				j++;
			}
		}
		if (makenew) {
			s[j].s = x;
			s[j].n++;
			cout << "OK" << endl;
		} else {
			cout << s[idx].s << s[idx].n << endl;
			s[idx].n++;
		}
	}

	return 0;
}