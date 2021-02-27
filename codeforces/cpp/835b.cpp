/*
	B. The number on the board
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	scanf("%d\n", &k);
	string s;
	cin >> s;
	vector<int> a;
	int i=s.length()-1;
	while (k>0 && i>=0) {
		k-=(s[i]-'0');
		// a[i]=9-(s[i]-'0');
		a.push_back(9-(s[i]-'0'));
		i--;
	}

	if (k<=0)
		putchar('0');
	else {
		sort(a.begin(), a.end());
		int ans=0;
		i = s.length()-1;
		while (k>0) {
			k-=a[i];
			ans++;
			i--;
		}
		printf("%d\n", ans);
	}

	return 0;
}