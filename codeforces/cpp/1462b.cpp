/*	
	B. Last Year's Substring
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string pattern = "2020";
		bool ans = false;
		int i=0;
		while (!ans && i<=4) {
			string temp = s.substr(0, 4-i) + s.substr(n-i, i);
			if (temp == pattern)
				ans = true;
			else
				i++;
		}
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}