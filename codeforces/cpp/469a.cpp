/*
	A. I Wanna Be the Guy
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, p, q, x;
	vector<bool> exist;
	
	cin >> n;
	for (i=1; i<=n+1; i++) {
		exist.push_back(false);
	}
	cin >> p;
	for (i=1; i<=p; i++) {
		cin >> x;
		exist[x]=true;
	}
	cin >> q;
	for (i=1; i<=q; i++) {
		cin >> x;
		exist[x]=true;
	}
	i=1;
	while (exist[i] && i<=n) {
		i++;
	}
	if (i>n) {
		cout << "I become the guy." << endl;
	} else {
		cout << "Oh, my keyboard!" << endl;
	}
	
	return 0;
}
