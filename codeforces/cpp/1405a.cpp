/*	
	A. Permutation Forgery
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		stack<int> s;
		while(n--) {
			int x;
			cin >> x;
			s.push(x);
		}
		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;

	}

	return 0;
}