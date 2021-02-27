/*
	B. Weird Rounding
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string n;
	int k;
	cin >> n >> k;
	// scanf("%d%d", &n, &k);
	int zero=0, i=n.size()-1, ans=0;
	while (zero<k && i>=0) {
		if (n[i]=='0')
			zero++;
		else ans++;
		i--;
	}
	if (zero==k)
		printf("%d\n", ans);
	else 
		cout << n.size()-1 << endl;

	return 0;
}