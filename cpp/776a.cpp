/*
	A. A Serial Killer
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string ans[2];
	cin >> ans[0] >> ans[1];
	int n;
	scanf("%d", &n);
	cout << ans[0] << " " << ans[1] << endl;
	while (n--) {
		string a,b;
		cin >> a >> b;
		if (ans[0]==a)
			ans[0]=b;
		else ans[1]=b;
		cout << ans[0] << " " << ans[1] << endl;
	}

	return 0;
}